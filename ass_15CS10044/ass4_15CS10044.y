%{
#include <stdio.h>
extern int yylex();
int yyerror(const char *);
#include "ass4_15CS10044_translator.h"
#include <string.h>

%}


%union {
  int ival;
  float fval;
  char cval;
  char *sval;
  struct id_attribute id;
  struct expression_attribute exp;
  struct variable_declaration_attribute var_decl;
  union attribute initializer;
  quad_instr_types unary;
  int instr;
  struct list_node *node_attr;
  struct parameter_list *parameter_attr;
}



%token <ival>INTEGER_CONSTANT
%token <fval>FLOAT_CONSTANT
%token <cval>CHAR_CONSTANT
%token <id>IDENTIFIER
%token <sval>STRING

%token UNSIGNED BREAK RETURN VOID CASE FLOAT SHORT CHAR FOR SIGNED WHILE GOTO BOOL CONTINUE IF DEFAULT DO INT SWITCH DOUBLE LONG ELSE MATRIX 

%token PTR_OP INC_OP DEC_OP LSHIFT_OP RSHIFT_OP LEQ_OP GEQ_OP EQ_OP NEQ_OP AND_OP OR_OP MULA_OP DIVA_OP REMA_OP ADDA_OP SUBA_OP LSA_OP RSA_OP ANDA_OP POWA_OP ORA_OP TRA_OP

%type<exp> primary-expression;
%type<exp> expression;
%type<exp> postfix-expression;
%type<exp> constant-expression;
%type<exp> statement;
%type<exp> compound-statement;
%type<exp> selection-statement;
%type<exp> iteration-statement;
%type<exp> jump-statement;
%type<exp> block-item-list;
%type<exp> block-item;
%type<exp> expression-statement;
%type<exp> unary-expression;
%type<exp> cast-expression;
%type<exp> multiplicative-expression;
%type<exp> additive-expression;
%type<exp> shift-expression;
%type<exp> relational-expression;
%type<exp> equality-expression;
%type<exp> AND-expression;
%type<exp> exclusive-OR-expression;
%type<exp> inclusive-OR-expression;
%type<exp> logical-AND-expression;
%type<exp> logical-OR-expression;
%type<exp> conditional-expression;
%type<exp> assignment-expression;

%type<var_decl> type-specifiers;
%type<var_decl> declaration-specifiers;
%type<var_decl> direct-declarator;
%type<var_decl> declarator;
%type<var_decl> parameter-declaration;
%type<var_decl> init-declarator;

%type<initializer> initializer;
%type<var_decl> init-declarator-list;
%type<var_decl> pointer;
%type<unary> unary-operator;
%type<instr> M;
%type<node_attr> N;
%type<parameter_attr> argument-expression-list;

%nonassoc "then"
%nonassoc ELSE

%start translation-unit

%%





/* EXPRESSIONS */


primary-expression:    IDENTIFIER						
					   {
					   		$1.loc = current->lookup($1.var);
	  						if(!($1.loc))
	  							$1.loc = global->lookup($1.var);
	  						$$.loc = $1.loc;
	  						$$.type = ($1.loc)->Type;
	  						$$.array = $$.loc;
	  						$$.loc1 = 0;
					   }		
					   
					   | INTEGER_CONSTANT 						
					   {
					   		$$.val.int_data = $1;
					  		$$.type = new_node(INT_,-1);
					  		$$.loc = current->gentemp(INT_);
					  		char *arg1 = new char[10];
					  		sprintf(arg1,"%d",$1);
					  		char *res = strdup(($$.loc)->name);
					  		quad_fields x(arg1,0,res,ASSIGN,0,0,$$.loc);
					  		quad_array->emit(x);
					   }	
					   
					   | FLOAT_CONSTANT
					   {
					   		$$.val.double_data = $1;
							$$.type = new_node(DOUBLE_,-1);
							$$.loc = current->gentemp(DOUBLE_);
					  		char *arg1 = new char[10];
					  		sprintf(arg1,"%lf",$1);
					  		char *res = strdup(($$.loc)->name);
					  		quad_fields x(arg1,0,res,ASSIGN,0,0,$$.loc);
					  		quad_array->emit(x);
					   }
					   
					   | CHAR_CONSTANT
					   {
					   		$$.val.char_data = $1;
					  		$$.type = new_node(CHAR_,-1);
					  		$$.loc = current->gentemp(CHAR_);
					  		char *arg1 = new char[10];
					  		sprintf(arg1,"%c",$1);
					  		char *res = strdup(($$.loc)->name);
					  		quad_fields x(arg1,0,res,ASSIGN,0,0,$$.loc);
					  		quad_array->emit(x);
					   }
					   
					   | STRING							
					   {
					   		// do nothing
					   }
					   
					   | '(' expression ')'				
					   {
					   		$$ = $2;
					   }
					 ;


postfix-expression:     primary-expression														
						{		
							$$ = $1;
						}
					  	
					  	| postfix-expression '[' expression ']'					
					  	{
					  		$$.array = $1.array;
					  		$$.type = ($1.type)->r;
					  		if(!($1.loc1)){
					  			$$.loc1 = current->gentemp(INT_);
					  			int m = compute_width(($1.type)->r);
					  			char *arg1 = strdup(($3.loc)->name);
					  			char *arg2 = new char[10];
					  			sprintf(arg2,"%d",m);
					  			char *res = strdup(($$.loc1)->name);
					  			quad_fields y(arg1,arg2,res,INTO,$3.loc,0,$$.loc1);
					  			quad_array->emit(y);
					  		}
					  		else{
					  			symbol_table_fields *temp = current->gentemp(INT_);
						  		$$.loc1 = current->gentemp(INT_);
						  		int n = compute_width($$.type);
						  		char *arg1 = strdup(($3.loc)->name);
						  		char *arg2 = new char[10];
						  		sprintf(arg2,"%d",n);
						  		char *res = strdup(temp->name);
						  		quad_fields x(arg1,arg2,res,INTO,$3.loc,0,temp);
						  		quad_array->emit(x);
						  		arg1 = strdup(($1.loc1)->name);
						  		arg2 = strdup(temp->name);
						  		res = strdup(($$.loc1)->name);
						  		quad_fields y(arg1,arg2,res,PLUS,$1.loc1,temp,$$.loc1);
						  		quad_array->emit(y);
					  		}
					  		flag_array = 1;
					  	}
					  	
					  	| postfix-expression '(' argument-expression-list ')'		
					  	{
					  			parameter_list *temp = $3;
					  			int count = 0;
					  			while(temp){
					  				char *arg1 = strdup((temp->parameter)->name);
					  				quad_fields x(arg1,0,0,PARAM,temp->parameter,0,0);
					  				quad_array->emit(x);
					 		 				count++;
					  				temp = temp->next;
					  			}
					  			symbol_table_fields *t = global->lookup(($1.loc)->name);
					  			$$.loc = current->gentemp(((((t->nestedTable)->table)[count]).Type)->down);
					  			char *res = strdup(($$.loc)->name);
					  			char *arg1 = strdup(($1.loc)->name);
					  			char *arg2 = new char[10];
					  			sprintf(arg2,"%d",count);
					  			quad_fields x(arg1,arg2,res,call,$1.loc,0,$$.loc);
					  			quad_array->emit(x);
					  			$$.type = ($$.loc)->Type;
					    }
					  	
					  	| postfix-expression '(' ')'								
					  	{
					  			int count = 0;
					  			symbol_table_fields *t = global->lookup(($1.loc)->name);
					  			$$.loc = current->gentemp(((((t->nestedTable)->table)[count]).Type)->down);
					  			char *res = strdup(($$.loc)->name);
					  			char *arg1 = strdup(($1.loc)->name);
					  			char *arg2 = new char[10];
					  			sprintf(arg2,"%d",count);
					  			quad_fields x(arg1,arg2,res,call,$1.loc,0,$$.loc);
					  			quad_array->emit(x);
					  			$$.type = ($$.loc)->Type;
					  	}
					 	
					 	| postfix-expression '.' IDENTIFIER 						
					 	{
					 		//printf("postfix-expression -> postfix-expression.IDENTIFIER\n");
					 	}
					  	
					  	| postfix-expression PTR_OP IDENTIFIER 					
					  	{
					  		//printf("postfix-expression -> postfix-expression -> IDENTIFIER\n");}
					  	}
					  	
					  	| postfix-expression INC_OP  								
					  	{
					  			$$.loc = current->gentemp(($1.type)->down);
							  	char *arg1 = strdup(($1.loc)->name);
							  	char *res = strdup(($$.loc)->name);
							  	quad_fields x(arg1,0,res,ASSIGN,$1.loc,0,$$.loc);
							  	quad_array->emit(x);
							  	arg1 = strdup(($1.loc)->name);
							  	char *arg2 = new char[10];
							  	sprintf(arg2,"1");
							  	res = strdup(($1.loc)->name);
							  	quad_fields y(arg1,arg2,res,PLUS,$1.loc,0,$1.loc);
							  	quad_array->emit(y);
							  	$$.type = $1.type;				
					  	}
					  	
					  	| postfix-expression DEC_OP 								
					  	{	
					  		
						  		$$.loc = current->gentemp(($1.type)->down);
							  	char *arg1 = strdup(($1.loc)->name);
							  	char *res = strdup(($$.loc)->name);
							  	quad_fields x(arg1,0,res,ASSIGN,$1.loc,0,$$.loc);
							  	quad_array->emit(x);
							  	arg1 = strdup(($1.loc)->name);
							  	char *arg2 = new char[10];
							  	sprintf(arg2,"1");
							  	res = strdup(($1.loc)->name);
							  	quad_fields y(arg1,arg2,res,MINUS,$1.loc,0,$1.loc);
					  			quad_array->emit(y);
					  			$$.type = $1.type;
					  	}
					  	
					  	| postfix-expression TRA_OP								
					  	{	
					  		//printf("postfix-expression -> postfix-expression .'\n");}
					  	}	
					  	;

argument-expression-list  :  assignment-expression                               
							 {
							 	$$ = make_param_list($1.loc);
							 }
						  	 
						  	 |  argument-expression-list ',' assignment-expression 
						  	 {
						  	  	$$ = merge_param_list($1,make_param_list($3.loc));
						  	 }
						  	;

unary-operator  :  '&'                 
					{
						$$ = U_ADDR;
					}
					
					|  '*' 				   
					{	
						$$ = U_STAR;
					}

					|  '+'
					{
						$$ = U_PLUS;
					}
					
					|  '-' 				   
					{	
						$$ = U_MINUS;
					}	
					;

unary-expression  : postfix-expression         			
					{
						$$ = $1;
				  		if($1.loc1){
				  			$$.loc = current->gentemp(($1.type)->down);
				  			char *arg1 = strdup(($1.array)->name);
				  			char *arg2 = strdup(($1.loc1)->name);
				  			char *res = strdup(($$.loc)->name);
				  			quad_fields x(arg1,arg2,res,EQ_BRACKET,$1.loc,$1.loc1,$$.loc);
				  			quad_array->emit(x);
						}
					}
				  	
				   | INC_OP unary-expression    			
				   {	
				   		$$.loc = current->gentemp(($2.type)->down);
					  	char *arg1 = strdup(($2.loc)->name);
					  	char *arg2 = new char[10];
					  	sprintf(arg2,"1");
					  	char *res = strdup(($2.loc)->name);
					  	quad_fields y(arg1,arg2,res,PLUS,$2.loc,0,$2.loc);
					  	quad_array->emit(y);
					  	arg1 = strdup(($2.loc)->name);
					  	res = strdup(($$.loc)->name);
					  	quad_fields x(arg1,0,res,ASSIGN,$2.loc,0,$$.loc);
					  	quad_array->emit(x);
					  	$$.type = $2.type;
				  
				   }
				  
				   | DEC_OP unary-expression 			
				   {	

				   		$$.loc = current->gentemp(($2.type)->down);
				  		char *arg1 = strdup(($2.loc)->name);
				  		char *arg2 = new char[10];
				  		sprintf(arg2,"1");
				  		char *res = strdup(($2.loc)->name);
				  		quad_fields y(arg1,arg2,res,MINUS,$2.loc,0,$2.loc);
				  		quad_array->emit(y);
				  		arg1 = strdup(($2.loc)->name);
				  		res = strdup(($$.loc)->name);
				  		quad_fields x(arg1,0,res,ASSIGN,$2.loc,0,$$.loc);
				  		quad_array->emit(x);
				  		$$.type = $2.type;
				  
				   }
				   
				   |  unary-operator cast-expression 	
				   {	
				   		$$.loc = current->gentemp(($2.type)->down);
				  		char *arg1 = strdup(($2.loc)->name);
				  		char *res = strdup(($$.loc)->name);
				  		quad_fields x(arg1,0,res,$1,$2.loc,0,$$.loc);
				  		quad_array->emit(x);
				  		$$.type = $2.type;
				  	
				   }
				  ;

cast-expression  :  unary-expression 					
					{
						$$ = $1;
					}
				;

multiplicative-expression  :  cast-expression 			                      		
							  {
									$$ = $1;
						      }
						   |  multiplicative-expression '*' cast-expression 		
						   	  {
						   	  		if(typecheck($1.type, $3.type)){
						  				$$.loc = current->gentemp(($1.type)->down);
						  				char *arg1 = strdup(($1.loc)->name);
						  				char *arg2 = strdup(($3.loc)->name);
						  				char *res = strdup(($$.loc)->name);
						  				quad_fields x(arg1,arg2,res,INTO,$1.loc,$3.loc,$$.loc);
						  				quad_array->emit(x);
						  				$$.type = $1.type;
						  			}
						  		
						  			else{
						  				symbol_table_fields *temp1, *temp2;
						  				
						  				if(($1.type)->down == INT_ && ($3.type)->down == DOUBLE_){
						  					temp1 = current->gentemp(DOUBLE_);
						  					char *arg1 = new char[100];
						  					sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
						  					char *res = strdup(temp1->name);
						  					quad_fields x(arg1,0,res,ASSIGN,$1.loc,0,temp1);
						  					quad_array->emit(x);
						  					temp2 = current->gentemp(DOUBLE_);
						  					arg1 = strdup(temp1->name);
						  					char *arg2 = strdup(($3.loc)->name);
							  				res = strdup(temp2->name);
							  				quad_fields y(arg1,arg2,res,INTO,temp1,$3.loc,temp2);
						  					quad_array->emit(y);
						  					$$.type = $3.type;
						  				}
						  		

						  				else if(($1.type)->down == INT_ && ($3.type)->down == CHAR_){
						  					temp1 = current->gentemp(INT_);
						  					char *arg1 = new char[100];
						  					sprintf(arg1,"char2int(%s)",($3.loc)->name);
						  					char *res = strdup(temp1->name);
						  					quad_fields x(arg1,0,res,ASSIGN,$3.loc,0,temp1);
						  					quad_array->emit(x);
						  					temp2 = current->gentemp(INT_);
						  					arg1 = strdup(($1.loc)->name);
						  					char *arg2 = strdup(temp1->name);
						  					res = strdup(temp2->name);
						  					quad_fields y(arg1,arg2,res,INTO,$1.loc,temp1,temp2);
						  					quad_array->emit(y);
						  					$$.type = $1.type;
						  				}
						  		
							  			else if(($1.type)->down == DOUBLE_ && ($3.type)->down == INT_){
							  				temp1 = current->gentemp(DOUBLE_);
							  				char *arg1 = new char[100];
							  				sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
							  				char *res = strdup(temp1->name);
							  				quad_fields x(arg1,0,res,ASSIGN,$3.loc,0,temp1);
							  				quad_array->emit(x);
							  				temp2 = current->gentemp(DOUBLE_);
							  				arg1 = strdup(($1.loc)->name);
							  				char *arg2 = strdup(temp1->name);
									  		res = strdup(temp2->name);
							  				quad_fields y(arg1,arg2,res,INTO,$1.loc,temp1,temp2);
							  				quad_array->emit(y);
						  					$$.type = $1.type;
						  				}
						  		

								  		else if(($1.type)->down == CHAR_ && ($3.type)->down == INT_){
								  			temp1 = current->gentemp(INT_);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN,$1.loc,0,temp1);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp(INT_);
								  			arg1 = strdup(temp1->name);
								  			char *arg2 = strdup(($3.loc)->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,INTO,temp1,$3.loc,temp2);
								  			quad_array->emit(y);
								  			$$.type = $3.type;
								  			}
						  				
						  				$$.loc = temp2;
						  			}	
						   	  }
						   
						   |  multiplicative-expression '/' cast-expression 		
						   	  {
								   	 if(typecheck($1.type, $3.type)){
								  		$$.loc = current->gentemp(($1.type)->down);
								  		char *arg1 = strdup(($1.loc)->name);
								  		char *arg2 = strdup(($3.loc)->name);
								  		char *res = strdup(($$.loc)->name);
								  		quad_fields x(arg1,arg2,res,DIV,$1.loc,$3.loc,$$.loc);
								  		quad_array->emit(x);
								  		$$.type = $1.type;
								  	}
								  	

								  	else{
								  		symbol_table_fields *temp1, *temp2;
								  		
								  		if(($1.type)->down == INT_ && ($3.type)->down == DOUBLE_){
								  			temp1 = current->gentemp(DOUBLE_);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN,$1.loc,0,temp1);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp(DOUBLE_);
								  			arg1 = strdup(temp1->name);
								  			char *arg2 = strdup(($3.loc)->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,DIV,temp1,$3.loc,temp2);
								  			quad_array->emit(y);
								  			$$.type = $3.type;
								  		}
								  		

								  		else if(($1.type)->down == INT_ && ($3.type)->down == CHAR_){
								  			temp1 = current->gentemp(INT_);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN,$3.loc,0,temp1);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp(INT_);
								  			arg1 = strdup(($1.loc)->name);
								  			char *arg2 = strdup(temp1->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,DIV,$1.loc,temp1,temp2);
								  			quad_array->emit(y);
								  			$$.type = $1.type;
								  		}
								  		

								  		else if(($1.type)->down == DOUBLE_ && ($3.type)->down == INT_){
								  			temp1 = current->gentemp(DOUBLE_);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN,$3.loc,0,temp1);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp(DOUBLE_);
								  			arg1 = strdup(($1.loc)->name);
								  			char *arg2 = strdup(temp1->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,DIV,$1.loc,temp1,temp2);
								  			quad_array->emit(y);
								  			$$.type = $1.type;
								  		}
								  		
								  		else if(($1.type)->down == CHAR_ && ($3.type)->down == INT_){
								  			temp1 = current->gentemp(INT_);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN,$1.loc,0,temp1);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp(INT_);
								  			arg1 = strdup(temp1->name);
								  			char *arg2 = strdup(($3.loc)->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,DIV,temp1,$3.loc,temp2);
								  			quad_array->emit(y);
								  			$$.type = $3.type;
								  		}
								  		$$.loc = temp2;
								  	}	
						   	  }
						  
						   |  multiplicative-expression '%' cast-expression         
						   	  {
									   	  		if(typecheck($1.type, $3.type)){
									  		$$.loc = current->gentemp(($1.type)->down);
									  		char *arg1 = strdup(($1.loc)->name);
									  		char *arg2 = strdup(($3.loc)->name);
									  		char *res = strdup(($$.loc)->name);
									  		quad_fields x(arg1,arg2,res,PERCENT,$1.loc,$3.loc,$$.loc);
									  		quad_array->emit(x);
									  		$$.type = $1.type;
									  	}
									  	else{
									  		symbol_table_fields *temp1, *temp2;
									  		if(($1.type)->down == INT_ && ($3.type)->down == DOUBLE_){
									  			temp1 = current->gentemp(DOUBLE_);
									  			char *arg1 = new char[100];
									  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
									  			char *res = strdup(temp1->name);
									  			quad_fields x(arg1,0,res,ASSIGN,$1.loc,0,temp1);
									  			quad_array->emit(x);
									  			temp2 = current->gentemp(DOUBLE_);
									  			arg1 = strdup(temp1->name);
									  			char *arg2 = strdup(($3.loc)->name);
									  			res = strdup(temp2->name);
									  			quad_fields y(arg1,arg2,res,PERCENT,temp1,$3.loc,temp2);
									  			quad_array->emit(y);
									  			$$.type = $3.type;
									  		}
									  		else if(($1.type)->down == INT_ && ($3.type)->down == CHAR_){
									  			temp1 = current->gentemp(INT_);
									  			char *arg1 = new char[100];
									  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
									  			char *res = strdup(temp1->name);
									  			quad_fields x(arg1,0,res,ASSIGN,$3.loc,0,temp1);
									  			quad_array->emit(x);
									  			temp2 = current->gentemp(INT_);
									  			arg1 = strdup(($1.loc)->name);
									  			char *arg2 = strdup(temp1->name);
									  			res = strdup(temp2->name);
									  			quad_fields y(arg1,arg2,res,PERCENT,$1.loc,temp1,temp2);
									  			quad_array->emit(y);
									  			$$.type = $1.type;
									  		}
									  		else if(($1.type)->down == DOUBLE_ && ($3.type)->down == INT_){
									  			temp1 = current->gentemp(DOUBLE_);
									  			char *arg1 = new char[100];
									  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
									  			char *res = strdup(temp1->name);
									  			quad_fields x(arg1,0,res,ASSIGN,$3.loc,0,temp1);
									  			quad_array->emit(x);
									  			temp2 = current->gentemp(DOUBLE_);
									  			arg1 = strdup(($1.loc)->name);
									  			char *arg2 = strdup(temp1->name);
									  			res = strdup(temp2->name);
									  			quad_fields y(arg1,arg2,res,PERCENT,$1.loc,temp1,temp2);
									  			quad_array->emit(y);
									  			$$.type = $1.type;
									  		}
									  		else if(($1.type)->down == CHAR_ && ($3.type)->down == INT_){
									  			temp1 = current->gentemp(INT_);
									  			char *arg1 = new char[100];
									  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
									  			char *res = strdup(temp1->name);
									  			quad_fields x(arg1,0,res,ASSIGN,$1.loc,0,temp1);
									  			quad_array->emit(x);
									  			temp2 = current->gentemp(INT_);
									  			arg1 = strdup(temp1->name);
									  			char *arg2 = strdup(($3.loc)->name);
									  			res = strdup(temp2->name);
									  			quad_fields y(arg1,arg2,res,PERCENT,temp1,$3.loc,temp2);
									  			quad_array->emit(y);
									  			$$.type = $3.type;
									  		}
									  		$$.loc = temp2;
									  	}
						   	  }
						   ;

additive-expression  :  multiplicative-expression                           
						{
							$$ = $1;
						}
					 |  additive-expression '+' multiplicative-expression   
					 	{
					 		if(typecheck($1.type, $3.type)){
					  		$$.loc = current->gentemp(($1.type)->down);
					  		char *arg1 = strdup(($1.loc)->name);
					  		char *arg2 = strdup(($3.loc)->name);
					  		char *res = strdup(($$.loc)->name);
					  		quad_fields x(arg1,arg2,res,PLUS,$1.loc,$3.loc,$$.loc);
					  		quad_array->emit(x);
					  		$$.type = $1.type;
					  		}
					  	
						  	else{
						  		symbol_table_fields *temp1, *temp2;
						  		
						  		if(($1.type)->down == INT_ && ($3.type)->down == DOUBLE_){
						  			temp1 = current->gentemp(DOUBLE_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,$1.loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(DOUBLE_);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(($3.loc)->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,PLUS,temp1,$3.loc,temp2);
						  			quad_array->emit(y);
						  			$$.type = $3.type;
						  		}
						  		
						  		else if(($1.type)->down == INT_ && ($3.type)->down == CHAR_){
						  			temp1 = current->gentemp(INT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,$3.loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(INT_);
						  			arg1 = strdup(($1.loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,PLUS,$1.loc,temp1,temp2);
						  			quad_array->emit(y);
						  			$$.type = $1.type;
						  		}
						  		
						  		else if(($1.type)->down == DOUBLE_ && ($3.type)->down == INT_){
						  			temp1 = current->gentemp(DOUBLE_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,$3.loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(DOUBLE_);
						  			arg1 = strdup(($1.loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,PLUS,$1.loc,temp1,temp2);
						  			quad_array->emit(y);
						  			$$.type = $1.type;
						  		}
						  	
						  		else if(($1.type)->down == CHAR_ && ($3.type)->down == INT_){
						  			temp1 = current->gentemp(INT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,$1.loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(INT_);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(($3.loc)->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,PLUS,temp1,$3.loc,temp2);
						  			quad_array->emit(y);
						  			$$.type = $3.type;
						  		}
						  		$$.loc = temp2;
						  	}
					 	}
					 |  additive-expression '-' multiplicative-expression   
					 	{
					 		if(typecheck($1.type, $3.type)){
					  		$$.loc = current->gentemp(($1.type)->down);
					  		char *arg1 = strdup(($1.loc)->name);
					  		char *arg2 = strdup(($3.loc)->name);
					  		char *res = strdup(($$.loc)->name);
					  		quad_fields x(arg1,arg2,res,MINUS,$1.loc,$3.loc,$$.loc);
					  		quad_array->emit(x);
					  		$$.type = $1.type;
					  		}
					  		
					  		else{
						  		symbol_table_fields *temp1, *temp2;
						  		
						  		if(($1.type)->down == INT_ && ($3.type)->down == DOUBLE_){
						  			temp1 = current->gentemp(DOUBLE_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,$1.loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(DOUBLE_);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(($3.loc)->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,MINUS,temp1,$3.loc,temp2);
						  			quad_array->emit(y);
						  			$$.type = $3.type;
						  		}
						  		
						  		else if(($1.type)->down == INT_ && ($3.type)->down == CHAR_){
						  			temp1 = current->gentemp(INT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,$3.loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(INT_);
						  			arg1 = strdup(($1.loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,MINUS,$1.loc,temp1,temp2);
						  			quad_array->emit(y);
						  			$$.type = $1.type;
						  		}
						  		
						  		else if(($1.type)->down == DOUBLE_ && ($3.type)->down == INT_){
						  			temp1 = current->gentemp(DOUBLE_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,$3.loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(DOUBLE_);
						  			arg1 = strdup(($1.loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,MINUS,$1.loc,temp1,temp2);
						  			quad_array->emit(y);
						  			$$.type = $1.type;
						  		}
						  		
						  		else if(($1.type)->down == CHAR_ && ($3.type)->down == INT_){
						  			temp1 = current->gentemp(INT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,$1.loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(INT_);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(($3.loc)->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,MINUS,temp1,$3.loc,temp2);
						  			quad_array->emit(y);
						  			$$.type = $3.type;
						  		}
						  		$$.loc = temp2;
					  		}
					 }
					 ;

shift-expression  :  additive-expression 										
					{
						$$ = $1;
				  	}

				  |  shift-expression LSHIFT_OP additive-expression             
				  	{
					  	if(typecheck($1.type, $3.type)){
					  		$$.loc = current->gentemp(($1.type)->down);
					  		char *arg1 = strdup(($1.loc)->name);
					  		char *arg2 = strdup(($3.loc)->name);
					  		char *res = strdup(($$.loc)->name);
					  		quad_fields x(arg1,arg2,res,SL,$1.loc,$3.loc,$$.loc);
					  		quad_array->emit(x);
					  		$$.type = $1.type;
		  				}
				  	}
				  |  shift-expression RSHIFT_OP additive-expression         	
				  	{
				  		if(typecheck($1.type, $3.type)){
					  		$$.loc = current->gentemp(($1.type)->down);
					  		char *arg1 = strdup(($1.loc)->name);
					  		char *arg2 = strdup(($3.loc)->name);
					  		char *res = strdup(($$.loc)->name);
					  		quad_fields x(arg1,arg2,res,SR,$1.loc,$3.loc,$$.loc);
					  		quad_array->emit(x);
					  		$$.type = $1.type;
				  		}
				  	}
				  ;

relational-expression  :  shift-expression                                  	
					   {
						  	$$ = $1;	
					   }	
					   
					   |  relational-expression '<' shift-expression   			
					   {
					   		$$.TL = makelist(next_instr);
						  	char *arg1 = strdup(($1.loc)->name);
						  	char *arg2 = strdup(($3.loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_LT,$1.loc,$3.loc,0);
						  	quad_array->emit(x);
						  	$$.FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_,0,0,0);
						  	quad_array->emit(y);
						  	$$.type = new_node(BOOL_,-1);
					   }
					   
					   |  relational-expression '>' shift-expression 			
					   {	
					   		$$.TL = makelist(next_instr);
						  	char *arg1 = strdup(($1.loc)->name);
						  	char *arg2 = strdup(($3.loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_GT,$1.loc,$3.loc,0);
						  	quad_array->emit(x);
						  	$$.FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_,0,0,0);
						  	quad_array->emit(y);
						  	$$.type = new_node(BOOL_,-1);
					   }
					  
					   |  relational-expression LEQ_OP shift-expression    		
					   {
					   		$$.TL = makelist(next_instr);
						  	char *arg1 = strdup(($1.loc)->name);
						  	char *arg2 = strdup(($3.loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_LTE,$1.loc,$3.loc,0);
						  	quad_array->emit(x);
						  	$$.FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_,0,0,0);
						  	quad_array->emit(y);
						  	$$.type = new_node(BOOL_,-1);
					   }
					   
					   |  relational-expression GEQ_OP shift-expression        
					   {	
					   		$$.TL = makelist(next_instr);
						  	char *arg1 = strdup(($1.loc)->name);
						  	char *arg2 = strdup(($3.loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_GTE,$1.loc,$3.loc,0);
						  	quad_array->emit(x);
						  	$$.FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_,0,0,0);
						  	quad_array->emit(y);
						  	$$.type = new_node(BOOL_,-1);
					   }
					   ;

equality-expression  :  relational-expression 									
						{
							$$ = $1;
					 	}
					 
					 |  equality-expression EQ_OP relational-expression        
					 	{
					 		
						  	$$.TL = makelist(next_instr);
						  	char *arg1 = strdup(($1.loc)->name);
						  	char *arg2 = strdup(($3.loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_EQ,$1.loc,$3.loc,0);
						  	quad_array->emit(x);
						  	$$.FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_,0,0,0);
						  	quad_array->emit(y);
						  	$$.type = new_node(BOOL_,-1);
						} 
					 |  equality-expression NEQ_OP relational-expression        
					 	{
					 		$$.TL = makelist(next_instr);
						  	char *arg1 = strdup(($1.loc)->name);
						  	char *arg2 = strdup(($3.loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_NEQ,$1.loc,$3.loc,0);
						  	quad_array->emit(x);
						  	$$.FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_,0,0,0);
						  	quad_array->emit(y);
						  	$$.type = new_node(BOOL_,-1);
					 	}
					 ;

AND-expression  :  equality-expression                         
				{
						$$ = $1;
				}
				
				|  AND-expression '&' equality-expression      
				{
					if(typecheck($1.type, $3.type)){
				  		$$.loc = current->gentemp(($1.type)->down);
				  		char *arg1 = strdup(($1.loc)->name);
				  		char *arg2 = strdup(($3.loc)->name);
				  		char *res = strdup(($$.loc)->name);
				  		quad_fields x(arg1,arg2,res,BW_AND,$1.loc,$3.loc,$$.loc);
				  		quad_array->emit(x);
				  		$$.type = $1.type;
			  		}
				}
				;

exclusive-OR-expression  :  AND-expression                               
							{
									$$ = $1;
						 	}
						 
						 |  exclusive-OR-expression '^' AND-expression  
						 	{
						 		if(typecheck($1.type, $3.type)){
							  		$$.loc = current->gentemp(($1.type)->down);
							  		char *arg1 = strdup(($1.loc)->name);
							  		char *arg2 = strdup(($3.loc)->name);
							  		char *res = strdup(($$.loc)->name);
							  		quad_fields x(arg1,arg2,res,BW_XOR,$1.loc,$3.loc,$$.loc);
							  		quad_array->emit(x);
							  		$$.type = $1.type;
						  		}
						 	}
						 
						 ;

inclusive-OR-expression  :  exclusive-OR-expression                                
							{
								$$ = $1;
						 	}
						 
						 |  inclusive-OR-expression '|' exclusive-OR-expression    
						 	{
						 		if(typecheck($1.type, $3.type)){
						  		$$.loc = current->gentemp(($1.type)->down);
						  		char *arg1 = strdup(($1.loc)->name);
						  		char *arg2 = strdup(($3.loc)->name);
						  		char *res = strdup(($$.loc)->name);
						  		quad_fields x(arg1,arg2,res,BW_INOR,$1.loc,$3.loc,$$.loc);
						  		quad_array->emit(x);
						  		$$.type = $1.type;
						  	}
						 	}
						 	;

logical-AND-expression  :  inclusive-OR-expression                                 
						{
							$$ = $1;						}	
						
						|  logical-AND-expression AND_OP M inclusive-OR-expression   
						{	
							backpatch($1.FL,$3);
							$$.TL = merge($1.TL,$4.TL);
							$$.FL = $4.FL;
							$$.type = new_node(BOOL_,-1);
						}
						;

logical-OR-expression  :  logical-AND-expression                                
					   {
						  	$$ = $1;
					   }
					   
					   |  logical-OR-expression OR_OP M logical-AND-expression     
					   {
					   	  	backpatch($1.FL,$3);
					  		$$.TL = merge($1.TL,$4.TL);
						  	$$.FL = $4.FL;
						  	$$.type = new_node(BOOL_,-1);
					   }
					   ;

conditional-expression  :  logical-OR-expression                                              
						{
							$$ = $1;
						}
						
						|  logical-OR-expression N '?' M expression N ':' M conditional-expression    
						{
							$$.loc = current->gentemp(($5.type)->down);
						  	$$.type = $5.type;
						  	char *res = strdup(($$.loc)->name);
						  	char *arg1 = strdup(($9.loc)->name);
						  	quad_fields x(arg1,0,res,ASSIGN,$9.loc,0,$$.loc);
						  	quad_array->emit(x);
						  	list_node *l = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_,0,0,0);
						  	quad_array->emit(y);
						  	backpatch($6,next_instr);
						  	res = strdup(($$.loc)->name);
						  	arg1 = strdup(($5.loc)->name);
						  	quad_fields z(arg1,0,res,ASSIGN,$5.loc,0,$$.loc);
						  	quad_array->emit(z);
						  	l = merge(l,makelist(next_instr));
						  	quad_fields a(0,0,0,GOTO_,0,0,0);
						  	quad_array->emit(a);
						  	backpatch($2,next_instr);
						  	conv2Bool(&$1);
						  	backpatch($1.TL,$4);
						  	backpatch($1.FL,$8);
						  	backpatch(l,next_instr);
						}
						;

assignment-expression  :   conditional-expression                                        
					   {
					   		$$ = $1;
					   }
					   
					   |   unary-expression assignment-operator assignment-expression    
					   {
					   		if(typecheck($1.type,$3.type)){
						  		if($1.loc1){
							  		//printf("%s\n",($1.loc)->name);
							  		char *arg1 = strdup(($1.array)->name);
							  		char *arg2 = strdup(($1.loc1)->name);
							  		char *res = strdup(($3.loc)->name);
							  		quad_fields x(arg1,arg2,res,BRACKET_EQ,$1.loc,$1.loc1,$3.loc);
							  		quad_array->emit(x);
						  		}
						  		else{
							  		char *arg1 = strdup(($3.loc)->name);
								  	char *res = strdup(($1.loc)->name);
								  	quad_fields x(arg1,0,res,ASSIGN,$3.loc,0,$1.loc);
								  	quad_array->emit(x);
						  		}
					  		}
						  	
						  	else{
						  		symbol_table_fields *temp1, *temp2;
						  		if(($1.type)->down == INT_ && ($3.type)->down == DOUBLE_){
						  			temp1 = current->gentemp(INT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"dbl2int(%s)",($3.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,$3.loc,0,temp1);
						  			quad_array->emit(x);
						  		}
						  		else if(($1.type)->down == INT_ && ($3.type)->down == CHAR_){
						  			temp1 = current->gentemp(CHAR_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2char(%s)",($1.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,$1.loc,0,temp1);
						  			quad_array->emit(x);
						  			
						  		}
						  		else if(($1.type)->down == DOUBLE_ && ($3.type)->down == INT_){
						  			temp1 = current->gentemp(INT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"dbl2int(%s)",($1.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,$1.loc,0,temp1);
						  			quad_array->emit(x);
						  		}
						  		else if(($1.type)->down == CHAR_ && ($3.type)->down == INT_){
						  			temp1 = current->gentemp(CHAR_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2char(%s)",($3.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,$3.loc,0,temp1);
						  			quad_array->emit(x);
						  		}
						  		if($1.loc1){
							  		//printf("%s\n",($1.loc)->name);
							  		char *arg1 = strdup(($1.array)->name);
							  		char *arg2 = strdup(($1.loc1)->name);
							  		char *res = strdup((temp1)->name);
							  		quad_fields x(arg1,arg2,res,BRACKET_EQ,$1.loc,$1.loc1,$3.loc);
							  		quad_array->emit(x);
						  		}
						  		else{
							  		char *arg1 = strdup((temp1)->name);
								  	char *res = strdup(($1.loc)->name);
								  	quad_fields x(arg1,0,res,ASSIGN,$3.loc,0,$1.loc);
								  	quad_array->emit(x);
						  		}
						  	}
					   }
					   ;

assignment-operator  :  '='            {}
					 |  MULA_OP        {}
					 |  DIVA_OP        {}
					 |  REMA_OP        {}
					 |  ADDA_OP        {}
					 |  SUBA_OP        {}
					 |  LSA_OP         {}
					 |  RSA_OP         {}
					 |  ANDA_OP   	   {}
					 |  POWA_OP 	   {}
					 |  ORA_OP     	   {}
					 ;

expression  :  assignment-expression                    
			{
				$$ = $1;
			}	
			
			|  expression ',' assignment-expression     
			{	
				// 
			}	
			;


constant-expression  :  conditional-expression    
					 {
					 	//printf("constant-expression -> conditional-expression\n");
					 }
					 ;

/*DECLARATIONS*/

declaration  :  declaration-specifiers init-declarator-list ';'  
			 {
			 	if(flag1 == 1 && flag2 == 0){
		  		tree_node *temp = new_node(($1.type)->down,-1);
		  		char *temp1 = strdup("retVal");
		  		symbol_table_fields x(temp1,temp,0,$1.width,-1,0);
		  		temp_use->insert(x);
		  		temp = new_node(FUNCTION,-1);
		  		symbol_table_fields y($2.var,temp,0,0,-1,temp_use);
		  		global->insert(y);
			  	}
			  	flag1 = 0;
			  	flag2 = 0;
			  	c = 0;
			 }
			 
			 |  declaration-specifiers ';'         
			 {

			 }


declaration-specifiers  :  type-specifiers declaration-specifiers   
						{
							
						}
						
						|  type-specifiers                          
						{
							if(flag1 == 0 || flag2 == 0){
					  		$$.type = $1.type;
					  		$$.width = $1.width;
					  		t = $$.type;
					  		w = $$.width;
	  						}
						}
						;


init-declarator-list  :  init-declarator 							
					  {
					  		if(flag1 == 1 && flag2 == 0)
	  						$$.var = $1.var;
					  }
					  
					  |  init-declarator-list ',' init-declarator   
					  {
					  		 
					  }
					  ;

init-declarator  :  declarator 									
				 {
				 		if(flag1 == 0){
					  		tree_node *temp = new_node(t->down,-1);
					  		temp = merge_node($1.type,temp);
					  		int temp_size;
					  		if(temp->down == PTR)
					  			temp_size = PTR_SIZE;
					  		else{
						  		switch(t->down){
						  			case INT_ : temp_size = INT_SIZE;
						  					   break;
						  			case DOUBLE_ : temp_size = DOUBLE_SIZE;
						  						  break;
						  			case CHAR_   : temp_size = CHAR_SIZE;
						  						  break; 	
					  			}
					  		}
					  		temp_size = temp_size * $1.width;
					  		symbol_table_fields x($1.var,temp,0,temp_size,-1,0);
					  		current->insert(x);
					  		//current->print_table();
				  		}
				  	
				  		else if(flag1 == 1 && flag2 == 0){
				  			$$.var = $1.var;
				  		}	
     			 }
     			 
     			 |  declarator '=' initializer 					
     			 {
     			 		if(flag1 == 0){
					  		tree_node *temp = new_node(t->down,-1);
					  		temp = merge_node($1.type,temp);
					  		void *value;
					  		int *v1;
					  		double *v2;
					  		char *v3;
					  		int temp_size;
					  		switch(t->down){
					  			case INT_ : v1 = (int *)malloc(sizeof(int));
					  					   (*v1) = $3.int_data; 	
					  					   value = (void *)v1;
					  					   temp_size = INT_SIZE;
					  					   break;
					  			case DOUBLE_ : v2 = (double *)malloc(sizeof(double));
						  					   (*v2) = $3.double_data;
						  					   //printf("%lf\n",$3.double_data); 	
						  					   value = (void *)v2;
						  					   //printf("%lf\n",*v2);
						  					   temp_size = DOUBLE_SIZE;
						  					   break;
					  			case CHAR_   :v3 = (char *)malloc(sizeof(char));
					  					   (*v3) = $3.char_data; 	
					  					   value = (void *)v3;
					  					   temp_size = CHAR_SIZE;
					  					   break;
					  			default     : value = 0; 	
					  		}
					  		temp_size = temp_size * $1.width;
					  		symbol_table_fields x($1.var,temp,value,temp_size,-1,0);
					  		current->insert(x);
					  	}
     			 }
     			 ;


type-specifiers  :  VOID   	
				 {
				 		if(flag2 == 0 || flag1 == 0){
				  		$$.type = new_node(VOID_,-1);
				  		$$.width = 0;
			  	}
				 }
				 
				 |  CHAR    
				 {
				 		if(flag2 == 0 || flag1 == 0){
				  		$$.type = new_node(CHAR_,-1);
				  		$$.width = CHAR_SIZE;
			  	}
				 }
				 
				 |  SHORT   
				 {
				 		//printf("type-specifiers -> SHORT\n");}
				 }
				 
				 |  INT     
				 {		
				 		if(flag2 == 0 || flag1 == 0){
			  			$$.type = new_node(INT_,-1);
			  			$$.width = INT_SIZE;
			  			}
				 }
				 
				 |  FLOAT   
				 {
				 		//printf("type-specifiers -> FLOAT\n");}
				 }
				 
				 |  DOUBLE  
				 {
				 		if(flag2 == 0 || flag1 == 0){
			  			$$.type = new_node(DOUBLE_,-1);
			  			$$.width = DOUBLE_SIZE;
			  	}
				 }
				 
				 |  MATRIX  
				 {		
				 		//printf("type-specifiers -> MATRIX\n");}
				 }
				 
				 |  SIGNED 
				 {
				 		//printf("type-specifiers -> SIGNED\n");}
				 }
				 
				 |  UNSIGNED 
				 {	
				 		//printf("type-specifiers -> UNSIGNED\n");}
				 }
				 
				 |  BOOL    
				 {
				 		//printf("type-specifiers -> BOOL\n");}
				 }
				 ;

declarator  :  pointer direct-declarator    
			{
					if(flag1 == 0 || flag2 == 0){
			  		$$.type = merge_node($2.type,$1.type);
			  		$$.width = $2.width;
			  		$$.var = $2.var;
		  	}
			}
			|  direct-declarator            
			{	
					$$.type = $1.type;
			  		$$.var = $1.var;
			  		$$.width = $1.width;
			}
			;

direct-declarator  :  IDENTIFIER                                         
				   {
				   		if(flag1 == 0 || flag2 == 0){
					  		$$.var = $1.var;
						  	$$.type = 0;
						  	$$.width = 1;
						  	if(c == 0){
						  		
						  		symbol_table_fields *t = current->lookup($1.var);
							  	if(t){
							  		flag2 = 1;
							  		temp_use = (t->nestedTable);	// Set flag to handle multiple declaration
							  	
							  	}												// (to be used in other actions)		
							  	else                                            
							  		flag2 = 0; 
							  	c++;	
						  	}
					  	}		
				   }
				   
				   |  '(' declarator ')' 								 
				   {
				   		//printf("direct-declarator -> (declarator)\n");}
				   }
				   
				   |  direct-declarator '[' assignment-expression ']'    
				   {
				   		if(flag1 == 0 || flag2 == 0){
					  		tree_node *temp = new_node(ARRAY,$3.val.int_data);
					  		$$.type = merge_node($1.type,temp);
					  		$$.width = $1.width * $3.val.int_data;
					  		$$.var = $1.var;
					  	}
				   }
				   
				   |  direct-declarator '[' ']'                          
				   {	
				   		
					  	if(flag1 == 0 || flag2 == 0){
					  		$$.var = $1.var;
						  	$$.type = $1.type;
						  	$$.width = $1.width;
					  	}
					    
				   }
				   
				   |  direct-declarator '(' parameter-type-list ')'      
				   {
				   		flag1 = 1;										
					  	$$.var = $1.var;
					  	$$.type = 0;
					  	$$.width = 1;
				   }
				   
				   |  direct-declarator '(' identifier-list ')' 		 
				   {
				   		//printf("direct-declarator -> direct-declarator(identifier-list)\n");}
				   }
				   
				   |  direct-declarator '(' ')'         				 
				   {
				   		flag1 = 1;
					  	if(flag2 == 0)
					  		temp_use = create_Symbol_Table();
					  	$$.var = $1.var;
					  	$$.type = 0;
					  	$$.width = 1;
				   }
				   ;




pointer  :  '*' pointer   
		 {
		 	tree_node *temp = new_node(PTR,-1);
	  		$$.type = merge_node($2.type,temp);
		 }
		 
		 |  '*' 		  
		 {
		 	$$.type = new_node(PTR,-1);
		 }
		 ;

parameter-type-list  :  parameter-list   
					 {
					 		//printf("parameter-type-list -> parameter-list\n");}
					 }
					 ;

parameter-list  :  parameter-declaration                           
				{
					if(flag2 == 0){										// An indication of the fact that function has not been
			  		temp_use = create_Symbol_Table();				// declared previously
			  		symbol_table_fields x($1.var,$1.type,0,$1.width,-1,0); //Insert in sym tab of function(offset comp.in insert)
			  		temp_use->insert(x);
			  		}
				}
				
				|  parameter-list ',' parameter-declaration		   
				{
					if(flag2 == 0){
			  		symbol_table_fields x($3.var,$3.type,0,$3.width,-1,0); //Insert in sym tab of function(offset comp. in insert)
			  		temp_use->insert(x);
			  		}
				}
				;

parameter-declaration  :  declaration-specifiers declarator        
					   {
					   		if(flag2 == 0){						
					  		$$.type = merge_node($2.type,$1.type);
					  		$$.var = $2.var;
					  		$$.width = $1.width*$2.width;
					  		}	
					   }
					   
					   |  declaration-specifiers                   
					   {
					   		//printf("parameter-declaration -> declaration-specifiers\n");}
					   }
					   ;

identifier-list  :  IDENTIFIER 									 
				 {
				 	//printf("identifier-list -> IDENTIFIER\n");}
				 }
				 
				 |  identifier-list ',' IDENTIFIER 				 
				 {	
				 	//printf("identifier-list -> identifier-list, IDENTIFIER\n");}
				 }
				 ;

initializer  :  assignment-expression                            
			 {
			 	$$ = $1.val;
			 }
			 
			 |  '{' initializer-row-list '}' 					 
			 {
			 	//printf("initializer -> { initializer-row-list }\n");}
			 }
			 ;

initializer-row-list  :  initializer-row 							
					  {
					  		//printf("initializer-row-list -> initializer-row\n");}
					  }
					  
					  |  initializer-row-list ';' initializer-row   
					  {
					  		//printf("initializer-row-list -> initializer-row-list ; initializer-row\n");}
					  }
					  ;

initializer-row  :  designation initializer                        
				 {
				 		//printf("initializer-row -> designation initializer\n");}
				 }
				 
				 |  initializer  								   
				 {  	
				 		//printf("initializer-row -> initializer\n");}
				 }
				 
				 |  initializer-row ',' designation initializer    
				 {
				 		//printf("initializer-row -> initializer-row, designation initializer\n");}
				 }
				 
				 |  initializer-row ',' initializer  			   
				 {
				 		//printf("initializer-row -> initializer-row, initializer\n");}
				 }
				 ; 


designation  :  designator-list '='  					
			 {
			 		//printf("designation -> designator-list =\n");}
			 }
			 ;

designator-list  :  designator 							
				 {
				 	//printf("designator-list -> designator\n");}
				 }
				 
				 |  designator-list designator          
				 {
				 		//printf("designator-list -> designator-list designator\n");}
				 }
				 ;

designator  :  '[' constant-expression ']' 				
			{
					//printf("designator -> [constant-expression]");}
    		}
    		
    		|  '.' IDENTIFIER 							
    		{
    				//printf("designator -> .IDENTIFIER");}
    		}
    		;

/*STATEMENT*/


statement  :  labeled-statement				
		   {
		   		//printf("statement -> labeled-statement\n");}
		   }
		   
		   |  compound-statement 			
		   {
		   		$$ = $1;
		   }
		   
		   |  expression-statement			
		   {
		   		$$ = $1;
		   }
		   
		   |  selection-statement 			
		   {
		   		$$ = $1;
		   }
		   
		   |  iteration-statement 			
		   {
		   		$$ = $1;
		   }
		   |  jump-statement 				
		   {
		   		$$ = $1;
		   }
		   ;

expression-statement  :  expression ';'     
					  {
					  		//printf("expression-statement -> expression ;\n");}
					  }
					  
					  |  ';'				
					  {
					  		//printf("expression-statement -> ;\n");}
					  }
					  ;


labeled-statement  :  IDENTIFIER ':' statement 						
				   {
				   		//printf("labeled-statement -> IDENTIFIER : statement\n");}
				   }
				   
				   |  CASE constant-expression ':' statement 		
				   {	
				   		//printf("labeled-statement -> CASE constant-expression : statement\n");}
				   }
				   
				   |  DEFAULT ':' statement 						
				   {
				   		//printf("DEFAULT : statement\n");}
				   }
				   ;

compound-statement  :  '{' block-item-list '}'    
					{
							$$ = $2;
					}
					
					|  '{' '}' 					  
					{
							//printf("compound-statement -> {}");}
					}
					;

block-item-list  :  block-item 					  
				 {
				 		 $$ = $1;
				 }
				 
				 |  block-item-list M block-item    
				 {
				 		backpatch($1.NL,$2);
						$$ = $3;
				 }
				 ;

block-item  :  declaration 		
			{
				//printf("block-item -> declaration\n");}
			}
			
			|  statement 		
			{
				$$ = $1;
			}
			;


selection-statement  :  IF '(' expression N')' M statement N				%prec "then"       		
					 {
					 		backpatch($4,next_instr);
						  	conv2Bool(&$3);
						  	backpatch($3.TL,$6);
						  	$$.NL = merge($7.NL,$3.FL);
						  	$$.NL = merge($$.NL,$8);
					 }
					 
					 |  IF '(' expression N')' M statement N ELSE M statement     	 				
					 {
					 		list_node *l = 0;
						  	if(($3.type)->down!=BOOL_){
						  		l = makelist(next_instr);
						  		quad_fields x(0,0,0,GOTO_,0,0,0);
						  		quad_array->emit(x);
						  	}
						  	backpatch($4,next_instr);
						  	conv2Bool(&$3);
						  	backpatch($3.TL,$6);
						  	backpatch($3.FL,$10);
						  	list_node *temp = merge($8,$7.NL);
						  	$$.NL = merge(temp,$11.NL);
						  	$$.NL = merge($$.NL,l);
					 }
					 
					 
					 |  SWITCH '(' expression ')' statement 				        		
					 {
					 		//printf("selection-statement -> SWITCH (expression) statement\n");}
					 }
					 ;

					

iteration-statement  :  WHILE M '(' expression N')' M statement                                              
					 {
					 		char *res = new char[10];
						  	sprintf(res,"%d",$2);
						  	quad_fields x(0,0,res,GOTO_,0,0,0);
						  	quad_array->emit(x);
						  	backpatch($5,next_instr);
						  	conv2Bool(&$4);
						  	backpatch($8.NL,$2);
						  	backpatch($4.TL,$7);
						  	$$.NL = $4.FL;
					 }
					 
					 |  DO M statement M WHILE '(' expression N')' 							  				
					 {
					 		backpatch($8,next_instr);
					  		conv2Bool(&$7);
					  		backpatch($7.TL,$2);
					  		backpatch($3.NL,$4);
					  		$$.NL = $7.FL;
					 }
					 
					 |  FOR '(' expression-statement M expression-statement N M expression N ')' M statement    	
					 {
					 		backpatch($9,$4);
						  	list_node *l = makelist(next_instr);
						  	quad_fields x(0,0,0,GOTO_,0,0,0);
						  	quad_array->emit(x);
						  	$12.NL = merge($12.NL,l);
						  	backpatch($12.NL,$7);
						  	backpatch($6,next_instr);
						  	conv2Bool(&$5);
						  	backpatch($5.TL,$11);
						  	$$.NL = $5.FL;
					 }
					 
					 |  FOR '(' declaration expression-statement expression ')' statement   			
					 {
					 		//printf("FOR (declaration expression-opt ; expression ) statement\n");}
					 }
					 
					 |  FOR '(' declaration expression-statement ')' statement   			            
					 {
					 		//printf("FOR (declaration expression-opt ; ) statement\n");}
					 }
					 ;

jump-statement  :  GOTO IDENTIFIER ';' 			
				{
						//printf("jump-statement -> GOTO IDENTIFIER; \n");}
				}
				|  CONTINUE ';'				
				{
						//printf("jump-statement -> CONTINUE;\n");}
				}
				
				|  BREAK ';' 				
				{	
						//printf("jump-statement -> BREAK;\n");}
				}
				
				|  RETURN expression ';'        
				{
						char *arg1 = strdup(($2.loc)->name);
			  			quad_fields x(arg1,0,0,RETURN_EXP,$2.loc,0,0);
			  			quad_array->emit(x);
				}
				
				|  RETURN ';' 				    
				{
						quad_fields x(0,0,0,RETURN_,0,0,0);
	  					quad_array->emit(x);
				}
				;


translation-unit  :  external-declaration  						
				  {
				  		//printf("translation-unit -> external-declaration\n");}
				  }
				  
				  |  translation-unit external-declaration 		
				  {
				  		//printf("translation-unit -> translation-unit external-declaration\n");}
				  }
				  ;

external-declaration  :  function-definition 		
					  {
					  		//printf("external-declaration -> function-definition\n");}
					  }
					  
					  |  declaration 			
					  {
					  		//printf("external-declaration -> declaration\n");}
					  }
					  ;

function-definition  :  declaration-specifiers declarator declaration-list compound-statement 		
					 {
					 		//printf("function-definition -> declaration-specifiers declarator declaration-list compound-statement\n");}
					 }
					 
					 |  declaration-specifiers declarator F compound-statement 						
					 {
					 			current = global;
					 }
					 ;

					  ;

declaration-list  :  declaration 						
				  {
				  		//printf("declaration-list -> declaration\n");}
				  }
				  
				  |  declaration-list declaration       
				  {		
				  		//printf("declaration-list -> declaration-list declaration\n");}
				  }
				  ;


M:
				{
					$$ = next_instr;
				}
				;
N:
	{
		$$ = makelist(next_instr);
		quad_fields x(0,0,0,GOTO_,0,0,0);
		quad_array->emit(x);
	}
	;
F   :
	{
		current = temp_use;
		int i;
		char *t;
		for(i=0;i<=global->curr_length;i++){
			if((((global->table)[i]).nestedTable) == current){
				t = strdup(((global->table)[i]).name);
				break;
			}
		}
		quad_fields x(t,0,0,Function,0,0,0);
		quad_array->emit(x);
		flag1 = 0;
		flag2 = 0;
		c = 0;
	}
	;


%%		


int yyerror(const char *s){
  printf("Parser Error : %s\n",s);
  return -1;
  
}
