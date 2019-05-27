%{
#include "ass5_15CS10044_translator.h"
#include <string>
#include<bits/stdc++.h>
extern int yylex();
int yyerror(const char *);
vector<string> stringnames;
int strct=0;
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

%type<exp> initializer;
%type<exp> initializer-row-list;
%type<exp> initializer-row;
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
							//printf("primary-expression ->  IDENTIFIER\n");
					   		$1.loc = current->lookup($1.var);
	  						if(!($1.loc))
	  							$1.loc = global->lookup($1.var);
	  						$$.loc = $1.loc;
	  						$$.type = ($1.loc)->Type;
							$$.mat = $$.loc;
							$$.mat_offset_loc = 0;
					   }		
					   
					   | INTEGER_CONSTANT 						
					   {
							//printf("primary-expression ->  INTEGER_CONSTANT\n");
					   		$$.val.int_data = $1;
							$$.type = new_node(INT_,-1,-1);
							$$.loc = current->gentemp($$.type);
					  		char *arg1 = new char[10];
					  		sprintf(arg1,"%d",$1);
					  		char *res = strdup(($$.loc)->name);
					  		quad_fields x(arg1,0,res,ASSIGN);
					  		quad_array->emit(x);
					   }	
					   
					   | FLOAT_CONSTANT
					   {
					   		$$.val.double_data = $1;
							$$.type = new_node(DOUBLE_,-1,-1);
							$$.loc = current->gentemp($$.type);
					  		char *arg1 = new char[10];
					  		sprintf(arg1,"%lf",$1);
					  		char *res = strdup(($$.loc)->name);
					  		quad_fields x(arg1,0,res,ASSIGN );
					  		quad_array->emit(x);
					   }
					   
					   | CHAR_CONSTANT
					   {
					   		$$.val.char_data = $1;
					  		$$.type = new_node(CHAR_,-1,-1);
					  		$$.loc = current->gentemp($$.type);
					  		char *arg1 = new char[10];
					  		sprintf(arg1,"%c",$1);
					  		char *res = strdup(($$.loc)->name);
					  		quad_fields x(arg1,0,res,ASSIGN);
					  		quad_array->emit(x);
					   }
					   
					   | STRING							
					   {
					   		
					   		$$.loc -> name = new char[10];
        					sprintf($$.loc -> name, ".LC%d", strct);
        					strct++;
        					string s($1);
        					stringnames.push_back(s);

					   }
					   
					   | '(' expression ')'				
					   {
					   		$$ = $2;
					   }
					 ;


postfix-expression:     primary-expression														
						{	

							//printf("postfix-expression -> primary-expression\n");	
							$$ = $1;
						}
					  	
					  	| primary-expression '[' expression ']' '[' expression ']'				
					  	{

							//printf("postfix-expression -> primary-expression [expression][expression]\n");
												  		
							$$.mat = $1.mat;
							
							
							type_ds *temp = new_node(INT_,-1,-1);
							

							$$.type = temp;
							symbol_table_fields *temp1, *temp2, *temp3;
							

							$$.mat_offset_loc = current->gentemp(new_node(INT_,-1,-1));
					  		int m = INT_SIZE;
					  		char *arg1 = strdup(($6.loc)->name);
					  		char *arg2 = new char[10];
					  		sprintf(arg2,"%d",m);
							char *res = strdup(($$.mat_offset_loc)->name);
					  		quad_fields x(arg1,arg2,res,INTO);
					  		quad_array->emit(x);
							
							
							temp1 = current->gentemp(new_node(INT_,-1,-1));
							m = *(($1.type)->r);
							arg1 = strdup(($3.loc)->name);
					  		arg2 = new char[10];
					  		sprintf(arg2,"%d",m);
							res = strdup((temp1)->name);
							quad_fields y(arg1,arg2,res,INTO);
					  		quad_array->emit(y);
							
	
							temp2 = current->gentemp(new_node(INT_,-1,-1));
							m = INT_SIZE;
							arg1 = strdup((temp1)->name);
					  		arg2 = new char[10];
					  		sprintf(arg2,"%d",m);
							res = strdup((temp2)->name);
							quad_fields z(arg1,arg2,res,INTO);
					  		quad_array->emit(z);

							
							temp3 = current->gentemp(new_node(INT_,-1,-1));
							arg1 = strdup((temp2)->name);
							arg2 = new char[10];
					  		sprintf(arg2,"8");
							res = strdup((temp3)->name);
							quad_fields w(arg1,arg2,res,PLUS);
					  		quad_array->emit(w);
			
							
							arg1 = strdup(($$.mat_offset_loc)->name);
					  		arg2 = strdup((temp3)->name);
							res = strdup(($$.mat_offset_loc)->name);
							quad_fields v(arg1,arg2,res,PLUS);
					  		quad_array->emit(v);
	
					  	}
					  	
					  	| postfix-expression '(' argument-expression-list ')'		
					  	{
					  			parameter_list *temp = $3;
					  			int count = 0;
					  			while(temp){
					  				char *arg1 = strdup((temp->parameter)->name);
					  				quad_fields x(arg1,0,0,PARAM);
					  				quad_array->emit(x);
					 		 				count++;
					  				temp = temp->next;
					  			}
					  			symbol_table_fields *t = global->lookup(($1.loc)->name);
					  			$$.loc = current->gentemp(((((t->nestedTable)->table)[count]).Type));
					  			char *res = strdup(($$.loc)->name);
					  			char *arg1 = strdup(($1.loc)->name);
					  			char *arg2 = new char[10];
					  			sprintf(arg2,"%d",count);
					  			quad_fields x(arg1,arg2,res,call);
					  			quad_array->emit(x);
					  			$$.type = ($$.loc)->Type;
					    }
					  	
					  	| postfix-expression '(' ')'								
					  	{
					  			int count = 0;
					  			symbol_table_fields *t = global->lookup(($1.loc)->name);
					  			$$.loc = current->gentemp(((((t->nestedTable)->table)[count]).Type));
					  			char *res = strdup(($$.loc)->name);
					  			char *arg1 = strdup(($1.loc)->name);
					  			char *arg2 = new char[10];
					  			sprintf(arg2,"%d",count);
					  			quad_fields x(arg1,arg2,res,call);
					  			quad_array->emit(x);
					  			$$.type = ($$.loc)->Type;
					  	}
					 	
					 	| postfix-expression '.' IDENTIFIER 						
					 	{
					 		
					 	}
					  	
					  	| postfix-expression PTR_OP IDENTIFIER 					
					  	{
					  		
					  	}
					  	
					  	| postfix-expression INC_OP  								
					  	{

								if(!$1.mat_offset_loc){
					  			$$.loc = current->gentemp(($1.type));
							  	char *arg1 = strdup(($1.loc)->name);
							  	char *res = strdup(($$.loc)->name);
							  	quad_fields x(arg1,0,res,ASSIGN);
							  	quad_array->emit(x);
							  	arg1 = strdup(($1.loc)->name);
							  	char* arg2 = new char[10];
							  	sprintf(arg2, "1");
							  	res = strdup(($1.loc)->name);
							  	quad_fields y(arg1,arg2,res,PLUS);
							  	quad_array->emit(y);
							  	$$.type = $1.type;
							  	}

								else{
								$$.loc = current->gentemp($1.type);
								char* arg1 = strdup(($1.loc)->name);
								char* arg2 = strdup(($1.mat_offset_loc)->name);
								char* res  = strdup(($$.loc)->name);
								quad_fields x(arg1,arg2,res,EQ_BRACKET);
								quad_array->emit(x);

								symbol_table_fields* temp = current->gentemp($1.type);
								arg1 = strdup(($$.loc)->name);
								arg2 = new char[10];
								sprintf(arg2, "1");
								res  = strdup(temp->name);
								quad_fields y(arg1,arg2,res,PLUS);
								quad_array->emit(y);
								arg1 = strdup(($1.loc)->name);
								arg2 = strdup(($1.mat_offset_loc)->name);
								res  = strdup(temp->name);
								quad_fields z(arg1,arg2,res,BRACKET_EQ);
								quad_array->emit(z);
								}	


								

		
					  	}
					  	
					  	| postfix-expression DEC_OP 								
					  	{	
					  		
						  		if(!$1.mat_offset_loc){
					  			$$.loc = current->gentemp(($1.type));
							  	char *arg1 = strdup(($1.loc)->name);
							  	char *res = strdup(($$.loc)->name);
							  	quad_fields x(arg1,0,res,ASSIGN);
							  	quad_array->emit(x);
							  	arg1 = strdup(($1.loc)->name);
							  	char* arg2 = new char[10];
							  	sprintf(arg2, "1");
							  	res = strdup(($1.loc)->name);
							  	quad_fields y(arg1,arg2,res,MINUS);
							  	quad_array->emit(y);
							  	$$.type = $1.type;
							  	}

								else{
								$$.loc = current->gentemp($1.type);
								char* arg1 = strdup(($1.loc)->name);
								char* arg2 = strdup(($1.mat_offset_loc)->name);
								char* res  = strdup(($$.loc)->name);
								quad_fields x(arg1,arg2,res,EQ_BRACKET);
								quad_array->emit(x);

								symbol_table_fields* temp = current->gentemp($1.type);
								arg1 = strdup(($$.loc)->name);
								arg2 = new char[10];
								sprintf(arg2, "1");
								res  = strdup(temp->name);
								quad_fields y(arg1,arg2,res,MINUS);
								quad_array->emit(y);
								arg1 = strdup(($1.loc)->name);
								arg2 = strdup(($1.mat_offset_loc)->name);
								res  = strdup(temp->name);
								quad_fields z(arg1,arg2,res,BRACKET_EQ);
								quad_array->emit(z);
								}	

					  	}
					  	
					  	| postfix-expression TRA_OP								
					  	{	
					  		//printf("postfix-expression -> postfix-expression .'\n");
							int a;
			if($1.type->curr_type!=0) a = printf("Expected matrix in transpose operation\n");						type_ds* temp = new_node($1.type->curr_type, *($1.type->r), *($1.type->l));
							
								int i,j, row = *($1.type->l), col = *($1.type->r);
							  	symbol_table_fields *temp1, *temp2, *temp3;
							  	char *arg1, *arg2, *res;

								$$.type = $1.type;
								$$.loc = current->gentemp($1.type);
							  		

							  			
							  			
							  	
							  	for(i=0;i<row;i++)
							  	{
							  		for(j=0;j<col;j++)
							  		{

							  			int k = i*col*INT_SIZE + 8 + j*INT_SIZE;

							  			temp1 = current->gentemp(new_node(INT_,-1,-1));

							  			res =  strdup((temp1)->name);
							  			arg1 = strdup(($1.loc)->name);
							  			arg2 = new char[10];
							  			sprintf(arg2, "%d", k);
							  			quad_fields x(arg1, arg2, res, EQ_BRACKET);
							  			quad_array->emit(x);
							  			

							  			int p = j*row*INT_SIZE + 8 + i*INT_SIZE;
							  			res =  strdup((temp1)->name);
							  			arg1 = strdup(($$.loc)->name);
							  			arg2 = new char[10];
							  			sprintf(arg2, "%d", p);
							  			quad_fields y(arg1, arg2, res, BRACKET_EQ);
							  			quad_array->emit(y);


							  		}


							  	}				
							  	

							
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
				  		if($1.mat_offset_loc){
				  			$$.loc = current->gentemp(($1.type));
				  			char *arg1 = strdup(($1.mat)->name);
				  			char *arg2 = strdup(($1.mat_offset_loc)->name);
				  			char *res = strdup(($$.loc)->name);
				  			quad_fields x(arg1,arg2,res,EQ_BRACKET);
				  			quad_array->emit(x);
						}
					}
				  	
				   | INC_OP unary-expression    			
				   {	
						
						if($2.type->curr_type == 0) { printf("LINE %d : Matrix not expected for INC_OP",line_count); return -1; }
						else{ 
						
				   		$$.loc = current->gentemp(($2.type));
					  	char *arg1 = strdup(($2.loc)->name);
					  	char *arg2 = new char[10];
					  	sprintf(arg2,"1");
					  	char *res = strdup(($2.loc)->name);
					  	quad_fields y(arg1,arg2,res,PLUS);
					  	quad_array->emit(y);
					  	arg1 = strdup(($2.loc)->name);
					  	res = strdup(($$.loc)->name);
					  	quad_fields x(arg1,0,res,ASSIGN);
					  	quad_array->emit(x);
					  	$$.type = $2.type;

					 
					}
				  
				   }
				  
				   | DEC_OP unary-expression 			
				   {	

						if($2.type->curr_type == 0) { printf("LINE %d : Matrix not expected for DEC_OP",line_count); return -1; }
						else{
				   		$$.loc = current->gentemp(($2.type));
				  		char *arg1 = strdup(($2.loc)->name);
				  		char *arg2 = new char[10];
				  		sprintf(arg2,"1");
				  		char *res = strdup(($2.loc)->name);
				  		quad_fields y(arg1,arg2,res,MINUS);
				  		quad_array->emit(y);
				  		arg1 = strdup(($2.loc)->name);
				  		res = strdup(($$.loc)->name);
				  		quad_fields x(arg1,0,res,ASSIGN);
				  		quad_array->emit(x);
				  		$$.type = $2.type;}
				  
				   }
				   
				   |  unary-operator cast-expression 	
				   {	
				   		$$.loc = current->gentemp(($2.type));
				  		char *arg1 = strdup(($2.loc)->name);
				  		char *res = strdup(($$.loc)->name);
				  		quad_fields x(arg1,0,res,$1);
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

									
									if($3.type->curr_type == MATRIX_)				
										 $$.type = $3.type;
									else
										 $$.type = $1.type;  

						   	  		if(typecheck_mulex($1.type, $3.type)){
										
						  				$$.loc = current->gentemp(($$.type));
						  				if($1.type->curr_type != MATRIX_){
						  				char *arg1 = strdup(($1.loc)->name);
						  				char *arg2 = strdup(($3.loc)->name);
						  				char *res = strdup(($$.loc)->name);
						  				quad_fields x(arg1,arg2,res,INTO);
						  				quad_array->emit(x);}


						  				else
						  				{

						  						int a = *($1.type->l), b = *($1.type->r), c = *($3.type->r);
						  						int t,l,m,i,j;
						  						char *arg1, *arg2, *res;
						  						symbol_table_fields* temp1, *temp2, *temp3, *temp4;;
						  						temp4 = current->gentemp(new_node(INT_,-1,-1));
						  						temp3 = current->gentemp(new_node(INT_,-1,-1));
						  						temp2 = current->gentemp(new_node(INT_,-1,-1));
						  						temp1 = current->gentemp(new_node(INT_,-1,-1));

						  						for(i=0;i<a;i++)
							  					{
							  						for(j=0;j<c;j++)
							  						{
							  							arg1 = new char[10];
							  							sprintf(arg1, "%d", 0);
							  							res = strdup((temp4)->name);
							  							quad_fields g(arg1, 0 , res, ASSIGN);
							  							quad_array->emit(g);


							  							for(t = 0; t< b; t++)
							  							{

							  							int k = i*b*INT_SIZE + 8 + t*INT_SIZE;

							  							

							  							res =  strdup((temp1)->name);
							  							arg1 = strdup(($1.loc)->name);
							  							arg2 = new char[10];
							  							sprintf(arg2, "%d", k);
							  							quad_fields x(arg1, arg2, res, EQ_BRACKET);
							  							quad_array->emit(x);
							  			

							  							
							  							int p = t*c*INT_SIZE + 8 + j*INT_SIZE;
							  							res =  strdup((temp2)->name);
							  							arg1 = strdup(($3.loc)->name);
							  							arg2 = new char[10];
							  							sprintf(arg2, "%d", p);
							  							quad_fields y(arg1, arg2, res, EQ_BRACKET);
							  							quad_array->emit(y);

							  							res = strdup((temp3)->name);
							  							arg1 = strdup((temp1)->name);
							  							arg2 = strdup((temp2)->name);
							  							quad_fields z(arg1, arg2, res,INTO);
							  							quad_array->emit(z);

							  							res = strdup((temp4)->name);
							  							arg1 = strdup((temp4)->name);
							  							arg2 = strdup((temp3)->name);
							  							quad_fields v(arg1, arg2, res,PLUS);
							  							quad_array->emit(v);



							  							}

							  							l = i*c*INT_SIZE + 8 + j*INT_SIZE;
							  							
							  							arg1 = strdup(($$.loc)->name);
							  							arg2 = new char[10];
							  							sprintf(arg2, "%d", l);
							  							res =  strdup((temp4)->name);
							  							quad_fields x(arg1, arg2, res, BRACKET_EQ);
							  							quad_array->emit(x);

													}

							  					}			
							  	
						  					}
																  											
						  			}
						  		
						  			else{
										
						  				symbol_table_fields *temp1, *temp2;
						  				
						  				if(($1.type)->curr_type == INT_ && ($3.type)->curr_type == DOUBLE_){
						  					temp1 = current->gentemp($3.type);
						  					char *arg1 = new char[100];
						  					sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
						  					char *res = strdup(temp1->name);
						  					quad_fields x(arg1,0,res,ASSIGN);
						  					quad_array->emit(x);
						  					temp2 = current->gentemp($3.type);
						  					arg1 = strdup(temp1->name);
						  					char *arg2 = strdup(($3.loc)->name);
							  				res = strdup(temp2->name);
							  				quad_fields y(arg1,arg2,res,INTO);
						  					quad_array->emit(y);
						  					$$.type = $3.type;
						  				}
						  		

						  				else if(($1.type)->curr_type == INT_ && ($3.type)->curr_type == CHAR_){
						  					temp1 = current->gentemp($1.type);
						  					char *arg1 = new char[100];
						  					sprintf(arg1,"char2int(%s)",($3.loc)->name);
						  					char *res = strdup(temp1->name);
						  					quad_fields x(arg1,0,res,ASSIGN);
						  					quad_array->emit(x);
						  					temp2 = current->gentemp($1.type);
						  					arg1 = strdup(($1.loc)->name);
						  					char *arg2 = strdup(temp1->name);
						  					res = strdup(temp2->name);
						  					quad_fields y(arg1,arg2,res,INTO);
						  					quad_array->emit(y);
						  					$$.type = $1.type;
						  				}
						  		
							  			else if(($1.type)->curr_type == DOUBLE_ && ($3.type)->curr_type == INT_){
							  				temp1 = current->gentemp($1.type);
							  				char *arg1 = new char[100];
							  				sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
							  				char *res = strdup(temp1->name);
							  				quad_fields x(arg1,0,res,ASSIGN);
							  				quad_array->emit(x);
							  				temp2 = current->gentemp($1.type);
							  				arg1 = strdup(($1.loc)->name);
							  				char *arg2 = strdup(temp1->name);
									  		res = strdup(temp2->name);
							  				quad_fields y(arg1,arg2,res,INTO);
							  				quad_array->emit(y);
						  					$$.type = $1.type;
						  				}
						  		

								  		else if(($1.type)->curr_type == CHAR_ && ($3.type)->curr_type == INT_){
								  			temp1 = current->gentemp($3.type);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp($3.type);
								  			arg1 = strdup(temp1->name);
								  			char *arg2 = strdup(($3.loc)->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,INTO);
								  			quad_array->emit(y);
								  			$$.type = $3.type;
								  			}

										else if(($1.type)->curr_type == MATRIX_ && ($3.type)->curr_type == MATRIX_)
											{ printf("LINE %d :  Matrix multiplied not of proper dim\n",line_count); return -1 ;}


						  				
						  				$$.loc = temp2;
						  			}	
						   	  }
						   
						   |  multiplicative-expression '/' cast-expression 		
						   	  {
								   	 if(typecheck($1.type, $3.type)){
								  		$$.loc = current->gentemp(($1.type));
								  		char *arg1 = strdup(($1.loc)->name);
								  		char *arg2 = strdup(($3.loc)->name);
								  		char *res = strdup(($$.loc)->name);
								  		quad_fields x(arg1,arg2,res,DIV);
								  		quad_array->emit(x);
								  		$$.type = $1.type;
								  	}
								  	

								  	else{
								  		symbol_table_fields *temp1, *temp2;
								  		
								  		if(($1.type)->curr_type == INT_ && ($3.type)->curr_type == DOUBLE_){
								  			temp1 = current->gentemp($3.type);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp($3.type);
								  			arg1 = strdup(temp1->name);
								  			char *arg2 = strdup(($3.loc)->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,DIV);
								  			quad_array->emit(y);
								  			$$.type = $3.type;
								  		}
								  		

								  		else if(($1.type)->curr_type == INT_ && ($3.type)->curr_type == CHAR_){
								  			temp1 = current->gentemp($1.type);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp($1.type);
								  			arg1 = strdup(($1.loc)->name);
								  			char *arg2 = strdup(temp1->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,DIV);
								  			quad_array->emit(y);
								  			$$.type = $1.type;
								  		}
								  		

								  		else if(($1.type)->curr_type == DOUBLE_ && ($3.type)->curr_type == INT_){
								  			temp1 = current->gentemp($1.type);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp($1.type);
								  			arg1 = strdup(($1.loc)->name);
								  			char *arg2 = strdup(temp1->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,DIV);
								  			quad_array->emit(y);
								  			$$.type = $1.type;
								  		}
								  		
								  		else if(($1.type)->curr_type == CHAR_ && ($3.type)->curr_type == INT_){
								  			temp1 = current->gentemp($3.type);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp($3.type);
								  			arg1 = strdup(temp1->name);
								  			char *arg2 = strdup(($3.loc)->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,DIV);
								  			quad_array->emit(y);
								  			$$.type = $3.type;
								  		}
								  		$$.loc = temp2;
								  	}	
						   	  }
						  
						   |  multiplicative-expression '%' cast-expression         
						   	  {
									   	  		if(typecheck($1.type, $3.type)){
									  		$$.loc = current->gentemp(($1.type));
									  		char *arg1 = strdup(($1.loc)->name);
									  		char *arg2 = strdup(($3.loc)->name);
									  		char *res = strdup(($$.loc)->name);
									  		quad_fields x(arg1,arg2,res,PERCENT);
									  		quad_array->emit(x);
									  		$$.type = $1.type;
									  	}
									  	else{
									  		symbol_table_fields *temp1, *temp2;
									  		if(($1.type)->curr_type == INT_ && ($3.type)->curr_type == DOUBLE_){
									  			temp1 = current->gentemp($3.type);
									  			char *arg1 = new char[100];
									  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
									  			char *res = strdup(temp1->name);
									  			quad_fields x(arg1,0,res,ASSIGN);
									  			quad_array->emit(x);
									  			temp2 = current->gentemp($3.type);
									  			arg1 = strdup(temp1->name);
									  			char *arg2 = strdup(($3.loc)->name);
									  			res = strdup(temp2->name);
									  			quad_fields y(arg1,arg2,res,PERCENT);
									  			quad_array->emit(y);
									  			$$.type = $3.type;
									  		}
									  		else if(($1.type)->curr_type == INT_ && ($3.type)->curr_type == CHAR_){
									  			temp1 = current->gentemp($1.type);
									  			char *arg1 = new char[100];
									  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
									  			char *res = strdup(temp1->name);
									  			quad_fields x(arg1,0,res,ASSIGN);
									  			quad_array->emit(x);
									  			temp2 = current->gentemp($1.type);
									  			arg1 = strdup(($1.loc)->name);
									  			char *arg2 = strdup(temp1->name);
									  			res = strdup(temp2->name);
									  			quad_fields y(arg1,arg2,res,PERCENT);
									  			quad_array->emit(y);
									  			$$.type = $1.type;
									  		}
									  		else if(($1.type)->curr_type == DOUBLE_ && ($3.type)->curr_type == INT_){
									  			temp1 = current->gentemp($1.type);
									  			char *arg1 = new char[100];
									  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
									  			char *res = strdup(temp1->name);
									  			quad_fields x(arg1,0,res,ASSIGN);
									  			quad_array->emit(x);
									  			temp2 = current->gentemp($1.type);
									  			arg1 = strdup(($1.loc)->name);
									  			char *arg2 = strdup(temp1->name);
									  			res = strdup(temp2->name);
									  			quad_fields y(arg1,arg2,res,PERCENT);
									  			quad_array->emit(y);
									  			$$.type = $1.type;
									  		}
									  		else if(($1.type)->curr_type == CHAR_ && ($3.type)->curr_type == INT_){
									  			temp1 = current->gentemp($3.type);
									  			char *arg1 = new char[100];
									  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
									  			char *res = strdup(temp1->name);
									  			quad_fields x(arg1,0,res,ASSIGN);
									  			quad_array->emit(x);
									  			temp2 = current->gentemp($3.type);
									  			arg1 = strdup(temp1->name);
									  			char *arg2 = strdup(($3.loc)->name);
									  			res = strdup(temp2->name);
									  			quad_fields y(arg1,arg2,res,PERCENT);
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
					 		if(typecheck_addex($1.type, $3.type)){
					  		
					  		if($1.type->curr_type != MATRIX_){
							$$.loc = current->gentemp(($1.type));
					  		char *arg1 = strdup(($1.loc)->name);
					  		char *arg2 = strdup(($3.loc)->name);
					  		char *res = strdup(($$.loc)->name);
					  		quad_fields x(arg1,arg2,res,PLUS);
					  		quad_array->emit(x);
					  		$$.type = $1.type;}

					  		else
					  		{
					  					int row = *($1.type->l), col = *($1.type->r), i, j;
								  		char* arg1, *arg2, *res;

							  			for(i=0;i<row;i++)
							  			{
							  				for(j=0;j<col;j++)
							  				{

							  					int k = i*col*INT_SIZE + 8 + j*INT_SIZE;

							  					symbol_table_fields* temp1 = current->gentemp(new_node(INT_,-1,-1));

							  					res =  strdup((temp1)->name);
							  					arg1 = strdup(($1.loc)->name);
							  					arg2 = new char[10];
							  					sprintf(arg2, "%d", k);
							  					quad_fields x(arg1, arg2, res, EQ_BRACKET);
							  					quad_array->emit(x);

							  					symbol_table_fields* temp2 = current->gentemp(new_node(INT_,-1,-1));
							  			
							  					res =  strdup((temp2)->name);
							  					arg1 = strdup(($3.loc)->name);
							  					arg2 = new char[10];
							  					sprintf(arg2, "%d", k);
							  					quad_fields o(arg1, arg2, res, EQ_BRACKET);
							  					quad_array->emit(o);

							  					symbol_table_fields* temp3 = current->gentemp(new_node(INT_,-1,-1));
							  					res =  strdup((temp3)->name);
							  					arg1 = strdup((temp2)->name);
							  					arg2 = strdup((temp1)->name);
							  					quad_fields y(arg1, arg2, res, PLUS);
							  					quad_array->emit(y);

							  					
							  					res =  strdup((temp3)->name);
							  					arg1 = strdup(($$.loc)->name);
							  					arg2 = new char[10];
							  					sprintf(arg2, "%d", k);
							  					quad_fields z(arg1, arg2, res, BRACKET_EQ);
							  					quad_array->emit(z);


							  				}


							  			}				
							  	
					  		}
					  		
					  		}
					  	
						  	else{
				
								
						  		symbol_table_fields *temp1, *temp2;
						  		
						  		if(($1.type)->curr_type == INT_ && ($3.type)->curr_type == DOUBLE_){
						  			temp1 = current->gentemp($3.type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp($3.type);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(($3.loc)->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,PLUS);
						  			quad_array->emit(y);
						  			$$.type = $3.type;
						  		}
						  		
						  		else if(($1.type)->curr_type == INT_ && ($3.type)->curr_type == CHAR_){
						  			temp1 = current->gentemp($1.type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp($1.type);
						  			arg1 = strdup(($1.loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,PLUS);
						  			quad_array->emit(y);
						  			$$.type = $1.type;
						  		}
						  		
						  		else if(($1.type)->curr_type == DOUBLE_ && ($3.type)->curr_type == INT_){
						  			temp1 = current->gentemp($1.type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp($1.type);
						  			arg1 = strdup(($1.loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,PLUS);
						  			quad_array->emit(y);
						  			$$.type = $1.type;
						  		}
						  	
						  		else if(($1.type)->curr_type == CHAR_ && ($3.type)->curr_type == INT_){
						  			temp1 = current->gentemp($3.type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp($3.type);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(($3.loc)->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,PLUS);
						  			quad_array->emit(y);
						  			$$.type = $3.type;
						  		}
			else if((($1.type)->curr_type == INT_ || ($1.type)->curr_type == DOUBLE_ || ($1.type)->curr_type == CHAR_) && ($3.type)->curr_type == MATRIX_)
				{ printf("LINE %d : Matrix cannot be added to int/double/char\n",line_count); return -1;}

			else if(($1.type)->curr_type == MATRIX_ &&(($3.type)->curr_type == INT_ || ($3.type)->curr_type == DOUBLE_ || ($3.type)->curr_type == CHAR_))
				{ printf("LINE %d : Int/double/char cannot be added to matrix\n",line_count); return -1; }




							else if(($1.type)->curr_type == MATRIX_ && ($3.type)->curr_type == MATRIX_)
							     { printf("LINE %d : Matrix added not of proper dimension\n",line_count);return -1; }			


						  		$$.loc = temp2;
						  	}
					 	}
					 |  additive-expression '-' multiplicative-expression   
					 	{
					 		if(typecheck_addex($1.type, $3.type)){

					 		if($1.type->curr_type != MATRIX_){
					  		$$.loc = current->gentemp(($1.type));
					  		char *arg1 = strdup(($1.loc)->name);
					  		char *arg2 = strdup(($3.loc)->name);
					  		char *res = strdup(($$.loc)->name);
					  		quad_fields x(arg1,arg2,res,MINUS);
					  		quad_array->emit(x);
					  		$$.type = $1.type;}

					  		else{

					  					int row = *($1.type->l), col = *($1.type->r), i, j;
								  		char* arg1, *arg2, *res;

							  			for(i=0;i<row;i++)
							  			{
							  				for(j=0;j<col;j++)
							  				{

							  					int k = i*col*INT_SIZE + 8 + j*INT_SIZE;

							  					symbol_table_fields* temp1 = current->gentemp(new_node(INT_,-1,-1));

							  					res =  strdup((temp1)->name);
							  					arg1 = strdup(($1.loc)->name);
							  					arg2 = new char[10];
							  					sprintf(arg2, "%d", k);
							  					quad_fields x(arg1, arg2, res, EQ_BRACKET);
							  					quad_array->emit(x);

							  					symbol_table_fields* temp2 = current->gentemp(new_node(INT_,-1,-1));
							  			
							  					res =  strdup((temp2)->name);
							  					arg1 = strdup(($3.loc)->name);
							  					arg2 = new char[10];
							  					sprintf(arg2, "%d", k);
							  					quad_fields o(arg1, arg2, res, EQ_BRACKET);
							  					quad_array->emit(o);

							  					symbol_table_fields* temp3 = current->gentemp(new_node(INT_,-1,-1));
							  					res =  strdup((temp3)->name);
							  					arg1 = strdup((temp2)->name);
							  					arg2 = strdup((temp1)->name);
							  					quad_fields y(arg1, arg2, res, MINUS);
							  					quad_array->emit(y);

							  					
							  					res =  strdup((temp3)->name);
							  					arg1 = strdup(($$.loc)->name);
							  					arg2 = new char[10];
							  					sprintf(arg2, "%d", k);
							  					quad_fields z(arg1, arg2, res, BRACKET_EQ);
							  					quad_array->emit(z);


							  				}


							  			}		
					  		}
					  	
					  		}
					  		
					  		else{
						  		symbol_table_fields *temp1, *temp2;
						  		
						  		if(($1.type)->curr_type == INT_ && ($3.type)->curr_type == DOUBLE_){
						  			temp1 = current->gentemp($3.type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp($3.type);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(($3.loc)->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,MINUS);
						  			quad_array->emit(y);
						  			$$.type = $3.type;
						  		}
						  		
						  		else if(($1.type)->curr_type == INT_ && ($3.type)->curr_type == CHAR_){
						  			temp1 = current->gentemp($1.type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp($1.type);
						  			arg1 = strdup(($1.loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,MINUS);
						  			quad_array->emit(y);
						  			$$.type = $1.type;
						  		}
						  		
						  		else if(($1.type)->curr_type == DOUBLE_ && ($3.type)->curr_type == INT_){
						  			temp1 = current->gentemp($1.type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp($1.type);
						  			arg1 = strdup(($1.loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,MINUS);
						  			quad_array->emit(y);
						  			$$.type = $1.type;
						  		}
						  		
						  		else if(($1.type)->curr_type == CHAR_ && ($3.type)->curr_type == INT_){
						  			temp1 = current->gentemp($3.type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp($3.type);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(($3.loc)->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,MINUS);
						  			quad_array->emit(y);
						  			$$.type = $3.type;
						  		}

			else if((($1.type)->curr_type == INT_ || ($1.type)->curr_type == DOUBLE_ || ($1.type)->curr_type == CHAR_) && ($3.type)->curr_type == MATRIX_)
				 { printf("LINE %d : Matrix cannot be subtracted from int/double/char\n",line_count); return -1 ;}

			else if(($1.type)->curr_type == MATRIX_ &&(($3.type)->curr_type == INT_ || ($3.type)->curr_type == DOUBLE_ || ($3.type)->curr_type == CHAR_))
				 { printf("LINE %d : Int/double/char cannot be subtracted from to matrix\n",line_count); return -1; }


								else if(($1.type)->curr_type == MATRIX_ && ($3.type)->curr_type == MATRIX_)
									{ printf("LINE %d : Matrix subtracted not of proper dimension\n",line_count); return -1; }	
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
					  		$$.loc = current->gentemp(($1.type));
					  		char *arg1 = strdup(($1.loc)->name);
					  		char *arg2 = strdup(($3.loc)->name);
					  		char *res = strdup(($$.loc)->name);
					  		quad_fields x(arg1,arg2,res,SL);
					  		quad_array->emit(x);
					  		$$.type = $1.type;
		  				}
				  	}
				  |  shift-expression RSHIFT_OP additive-expression         	
				  	{
				  		if(typecheck($1.type, $3.type)){
					  		$$.loc = current->gentemp(($1.type));
					  		char *arg1 = strdup(($1.loc)->name);
					  		char *arg2 = strdup(($3.loc)->name);
					  		char *res = strdup(($$.loc)->name);
					  		quad_fields x(arg1,arg2,res,SR);
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
						  	quad_fields x(arg1,arg2,0,goto_LT);
						  	quad_array->emit(x);
						  	$$.FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_);
						  	quad_array->emit(y);
						  	$$.type = new_node(BOOL_,-1,-1);
					   }
					   
					   |  relational-expression '>' shift-expression 			
					   {	
					   		$$.TL = makelist(next_instr);
						  	char *arg1 = strdup(($1.loc)->name);
						  	char *arg2 = strdup(($3.loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_GT);
						  	quad_array->emit(x);
						  	$$.FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_);
						  	quad_array->emit(y);
						  	$$.type = new_node(BOOL_,-1,-1);
					   }
					  
					   |  relational-expression LEQ_OP shift-expression    		
					   {
					   		$$.TL = makelist(next_instr);
						  	char *arg1 = strdup(($1.loc)->name);
						  	char *arg2 = strdup(($3.loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_LTE);
						  	quad_array->emit(x);
						  	$$.FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_);
						  	quad_array->emit(y);
						  	$$.type = new_node(BOOL_,-1,-1);
					   }
					   
					   |  relational-expression GEQ_OP shift-expression        
					   {	
					   		$$.TL = makelist(next_instr);
						  	char *arg1 = strdup(($1.loc)->name);
						  	char *arg2 = strdup(($3.loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_GTE);
						  	quad_array->emit(x);
						  	$$.FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_);
						  	quad_array->emit(y);
						  	$$.type = new_node(BOOL_,-1,-1);
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
						  	quad_fields x(arg1,arg2,0,goto_EQ);
						  	quad_array->emit(x);
						  	$$.FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_);
						  	quad_array->emit(y);
						  	$$.type = new_node(BOOL_,-1,-1);
						} 
					 |  equality-expression NEQ_OP relational-expression        
					 	{
					 		$$.TL = makelist(next_instr);
						  	char *arg1 = strdup(($1.loc)->name);
						  	char *arg2 = strdup(($3.loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_NEQ);
						  	quad_array->emit(x);
						  	$$.FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_);
						  	quad_array->emit(y);
						  	$$.type = new_node(BOOL_,-1,-1);
					 	}
					 ;

AND-expression  :  equality-expression                         
				{
						$$ = $1;
				}
				
				|  AND-expression '&' equality-expression      
				{
					if(typecheck($1.type, $3.type)){
				  		$$.loc = current->gentemp(($1.type));
				  		char *arg1 = strdup(($1.loc)->name);
				  		char *arg2 = strdup(($3.loc)->name);
				  		char *res = strdup(($$.loc)->name);
				  		quad_fields x(arg1,arg2,res,BW_AND);
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
							  		$$.loc = current->gentemp(($1.type));
							  		char *arg1 = strdup(($1.loc)->name);
							  		char *arg2 = strdup(($3.loc)->name);
							  		char *res = strdup(($$.loc)->name);
							  		quad_fields x(arg1,arg2,res,BW_XOR);
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
						  		$$.loc = current->gentemp(($1.type));
						  		char *arg1 = strdup(($1.loc)->name);
						  		char *arg2 = strdup(($3.loc)->name);
						  		char *res = strdup(($$.loc)->name);
						  		quad_fields x(arg1,arg2,res,BW_INOR);
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
							$$.type = new_node(BOOL_,-1,-1);
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
						  	$$.type = new_node(BOOL_,-1,-1);
					   }
					   ;

conditional-expression  :  logical-OR-expression                                              
						{
							$$ = $1;
						}
						
						|  logical-OR-expression N '?' M expression N ':' M conditional-expression    
						{
							$$.loc = current->gentemp(($5.type));
						  	$$.type = $5.type;
						  	char *res = strdup(($$.loc)->name);
						  	char *arg1 = strdup(($9.loc)->name);
						  	quad_fields x(arg1,0,res,ASSIGN);
						  	quad_array->emit(x);
						  	list_node *l = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_);
						  	quad_array->emit(y);
						  	backpatch($6,next_instr);
						  	res = strdup(($$.loc)->name);
						  	arg1 = strdup(($5.loc)->name);
						  	quad_fields z(arg1,0,res,ASSIGN);
						  	quad_array->emit(z);
						  	l = merge(l,makelist(next_instr));
						  	quad_fields a(0,0,0,GOTO_);
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
				//printf("assignment-expression -> unary-expression assignment-operator assignment-expression \n");		
					   		if(typecheck_addex($1.type,$3.type)){
								
						  		if($1.mat_offset_loc){
							  		
							  		char *arg1 = strdup(($1.mat)->name);
							  		char *arg2 = strdup(($1.mat_offset_loc)->name);
							  		char *res = strdup(($3.loc)->name);
							  		quad_fields x(arg1,arg2,res,BRACKET_EQ);
							  		quad_array->emit(x);
						  		}
						  		else{

						  			if($1.type->curr_type != MATRIX_)
						  			{
							  		char *arg1 = strdup(($3.loc)->name);
								  	char *res = strdup(($1.loc)->name);
								  	quad_fields x(arg1,0,res,ASSIGN);
								  	quad_array->emit(x);
								  	}

								  	else
								  	{

								  		int row = *($1.type->l), col = *($1.type->r), i, j;
								  		char* arg1, *arg2, *res;

							  			for(i=0;i<row;i++)
							  			{
							  				for(j=0;j<col;j++)
							  				{

							  					int k = i*col*INT_SIZE + 8 + j*INT_SIZE;

							  					symbol_table_fields* temp1 = current->gentemp(new_node(INT_,-1,-1));

							  					res =  strdup((temp1)->name);
							  					arg1 = strdup(($3.loc)->name);
							  					arg2 = new char[10];
							  					sprintf(arg2, "%d", k);
							  					quad_fields x(arg1, arg2, res, EQ_BRACKET);
							  					quad_array->emit(x);
							  			

							  					
							  					res =  strdup((temp1)->name);
							  					arg1 = strdup(($1.loc)->name);
							  					arg2 = new char[10];
							  					sprintf(arg2, "%d", k);
							  					quad_fields y(arg1, arg2, res, BRACKET_EQ);
							  					quad_array->emit(y);


							  				}


							  			}				
							  	

								  	}

						  		}
					  		}
						  	
						  	else{
								
						  		symbol_table_fields *temp1, *temp2;
						  		if(($1.type)->curr_type == INT_ && ($3.type)->curr_type == DOUBLE_){
						  			temp1 = current->gentemp($1.type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"dbl2int(%s)",($3.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  		}
						  		else if(($1.type)->curr_type == INT_ && ($3.type)->curr_type == CHAR_){
						  			temp1 = current->gentemp($3.type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2char(%s)",($1.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  			
						  		}
						  		else if(($1.type)->curr_type == DOUBLE_ && ($3.type)->curr_type == INT_){
						  			temp1 = current->gentemp($3.type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"dbl2int(%s)",($1.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  		}
						  		else if(($1.type)->curr_type == CHAR_ && ($3.type)->curr_type == INT_){
						  			temp1 = current->gentemp($1.type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2char(%s)",($3.loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  		}

			else if((($1.type)->curr_type == INT_ || ($1.type)->curr_type == DOUBLE_ || ($1.type)->curr_type == CHAR_) && ($3.type)->curr_type == MATRIX_)
								{printf("LINE %d : Matrix unassignable to int/double/char\n",line_count); return -1;}

			else if(($1.type)->curr_type == MATRIX_ &&(($3.type)->curr_type == INT_ || ($3.type)->curr_type == DOUBLE_ || ($3.type)->curr_type == CHAR_))
								{printf("LINE %d : Int/double/char unassignable to matrix\n",line_count); return -1;}

								else if(($1.type)->curr_type == MATRIX_ && ($3.type)->curr_type == MATRIX_)
								{printf("LINE %d : Matrix to be assigned not of proper dimension\n",line_count); return -1;}

						  		if($1.mat_offset_loc){
							  		//printf("%s\n",($1.loc)->name);
							  		char *arg1 = strdup(($1.mat)->name);
							  		char *arg2 = strdup(($1.mat_offset_loc)->name);
							  		char *res = strdup((temp1)->name);
							  		quad_fields x(arg1,arg2,res,BRACKET_EQ);
							  		quad_array->emit(x);
						  		}
						  		else{
							  		char *arg1 = strdup((temp1)->name);
								  	char *res = strdup(($1.loc)->name);
								  	quad_fields x(arg1,0,res,ASSIGN);
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
				
				//printf("expression -> assignment-expression\n");				
				$$ = $1;
			}	
			
			|  expression ',' assignment-expression     
			{	
				// 
			}	
			;


constant-expression  :  conditional-expression    
					 {
					 	
					 }
					 ;

/*DECLARATIONS*/

declaration  :  declaration-specifiers init-declarator-list ';'  
			 {
				//printf("declaration  :  declaration-specifiers init-declarator-list ;\n");	 	
				
				if(flag1 == 1 && flag2 == 0){
				
				char* str;
				if(temp_use == global)					  	
				str = strdup("global");
				else
				str = strdup("local");
		  		
		  		char* str1 = strdup("global");

		  		type_ds *temp = new_node(($1.type)->curr_type,-1,-1);
		  		char *temp1 = strdup("retVal");
		  		symbol_table_fields x(temp1,temp,0,$1.width,-1,0,str);
		  		temp_use->insert(x);
		  		temp = new_node(FUNCTION,-1,-1);
		  		symbol_table_fields y($2.var,temp,0,0,-1,temp_use,str1);
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
							//printf("declaration-specifiers : type-specifiers \n");
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
							//printf("init-declarator-list  :  init-declarator  \n");
					  		if(flag1 == 1 && flag2 == 0)
	  						$$.var = $1.var;
					  }
					  
					  |  init-declarator-list ',' init-declarator   
					  {
					  		 
					  }
					  ;

init-declarator  :  declarator 									
				 {

						//printf("init-declarator  : declarator  \n");
										 		
						if(flag1 == 0){
				
											  		
							type_ds *temp;
							
							if(!$1.type)
							temp = new_node(t->curr_type,-1,-1); 
							else
							temp = $1.type;
							
							int temp_size;
					  		
							if(temp->curr_type == PTR)
					  			temp_size = PTR_SIZE;
							

					  		else{
						  		switch(t->curr_type){
						  			case INT_ : temp_size = INT_SIZE;
						  					   break;
						  			case DOUBLE_ : temp_size = DOUBLE_SIZE;
						  						  break;
						  			case CHAR_   : temp_size = CHAR_SIZE;
						  						  break; 
									case MATRIX_ : temp_size = INT_SIZE;
												  break;
										
					  			}
					  		}
							if(t->curr_type == MATRIX_)
							 temp_size = temp_size * $1.width + 8; 
							else
					  		temp_size = temp_size * $1.width;
					  		
					  		char* str;
							if(current == global)					  	
							str = strdup("global");
							else
							str = strdup("local");
							
					  		symbol_table_fields x($1.var,temp,0,temp_size,-1,0,str);
					  		current->insert(x);
					  		
				  		}
				  	
				  		else if(flag1 == 1 && flag2 == 0){
											  			
							$$.var = $1.var;
				  		}
							
     			 }
     			 
     			 |  declarator '=' initializer 					
     			 {
					//printf("declarator = initializer  \n");
     			 		if(flag1 == 0){
					  		type_ds *temp ;

					  		if(!$1.type)
							temp = new_node(t->curr_type,-1,-1); 
							else
							temp = $1.type;
					  		
					  		void *value;
					  		int *v1;
					  		double *v2;
					  		char *v3;
					  		int temp_size;
					  		char *arg1, *res;
							
					  		switch(t->curr_type){
					  			case INT_ : v1 = (int *)malloc(sizeof(int));
					  					   (*v1) = $3.val.int_data; 	
					  					   value = (void *)v1;
					  					   temp_size = INT_SIZE;
					  					   arg1 = strdup($3.loc->name);
					  					   res = strdup($1.var);
					  					   break;
					  			
					  			case DOUBLE_ : v2 = (double *)malloc(sizeof(double));
					  						//printf("HEYAAA %f\n", $3.val.double_data);
						  				    (*v2) = $3.val.double_data;
						  			    	    value = (void *)v2;
						  			  	   temp_size = DOUBLE_SIZE;
						  			  	   
					  					   arg1 = strdup($3.loc->name);
					  					   res = strdup($1.var);
						  				   break;
					  			
					  			case CHAR_   :v3 = (char *)malloc(sizeof(char));
					  					   (*v3) = $3.val.char_data; 	
					  					   value = (void *)v3;
					  					   temp_size = CHAR_SIZE;
					  					  
					  					    arg1 = strdup($3.loc->name);
					  					   res = strdup($1.var);
					  					   break;

					  			case MATRIX_ : 
					  							
												value = (void *)($3.val.v);
												break;
					  						   
					  			default     : value = 0; 	
					  		}
					  		if(t->curr_type == MATRIX_){
							temp_size = $1.width*INT_SIZE + 8;


							char* arg1 = strdup($1.var);
							char* arg2 = new char[10];
							sprintf(arg2, "0");
							char* res = new char[10]; 
							sprintf(res, "%d", *($1.type->l));
							quad_fields x(arg1, arg2, res, BRACKET_EQ);
							quad_array->emit(x);



							
							char* _arg2 = new char[10];
							sprintf(_arg2, "4");
							char* _res = new char[10]; 
							sprintf(_res, "%d", *($1.type->r));
							quad_fields y(arg1, _arg2, _res, BRACKET_EQ);
							quad_array->emit(y);

							int i = 8, k;
							


							for(k=0; k<(*($3.val.v)).size() ; k++)
							{
								
								arg1 = strdup($1.var);
								char* arg2 = new char[10];
								sprintf(arg2, "%d", i);
								
								char* res_ = new char[10]; 
								sprintf( res_, "%d", (*($3.val.v))[k] );
								quad_fields y(arg1, arg2, res_, BRACKET_EQ);
								quad_array->emit(y);
								i+=INT_SIZE;
							}


							}

							else{
					  		temp_size = temp_size * $1.width;
					  		quad_fields y(arg1,0,res,ASSIGN);
				  			quad_array->emit(y);
				  			}

				  			char* str;
							if(current == global)					  	
							str = strdup("global");
							else
							str = strdup("local");

					  		symbol_table_fields x($1.var,temp,value,temp_size,-1,0,str);
					  		current->insert(x);
					  		
					  	}
     			 }
     			 ;


type-specifiers  :  VOID   	
				 {
						//printf("type-specifiers  :  VOID   \n");				 		
						if(flag2 == 0 || flag1 == 0){
				  		$$.type = new_node(VOID_,-1,-1);
				  		$$.width = 0;
			  	}
				 }
				 
				 |  CHAR    
				 {
						//printf("type-specifiers  :  CHAR   \n");
				 		if(flag2 == 0 || flag1 == 0){
				  		$$.type = new_node(CHAR_,-1,-1);
				  		$$.width = CHAR_SIZE;
			  	}
				 }
				 
				 |  SHORT   
				 {
						//printf("type-specifiers  :  SHORT  \n");
				 		
				 }
				 
				 |  INT     
				 {		
						//printf("type-specifiers  :  INT   \n");		 		
												
						if(flag2 == 0 || flag1 == 0){
			  			$$.type = new_node(INT_,-1,-1);
			  			$$.width = INT_SIZE;
			  			}
						
				 }
				 
				 |  FLOAT   
				 {
						
				 		
				 }
				 
				 |  DOUBLE  
				 {
						//printf("type-specifiers  :  DOUBLE   \n");
				 		if(flag2 == 0 || flag1 == 0){
			  			$$.type = new_node(DOUBLE_,-1,-1);
			  			$$.width = DOUBLE_SIZE;
			  	}
				 }
				 
				 |  MATRIX  
				 {		
						//printf("type-specifiers  :  MATRIX   \n");
				 		if(flag2 == 0 || flag1 == 0){
			  			$$.type = new_node(MATRIX_,-1,-1);
			  			$$.width = 1;
			  			}
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
			  		//$$.type = merge_node($2.type,$1.type);
			  		$$.width = $2.width;
			  		$$.var = $2.var;
		  	}
			}
			|  direct-declarator            
			{	
					//printf("declarator : direct-declarator   \n");
					$$.type = $1.type;
			  		$$.var = $1.var;
			  		$$.width = $1.width;

			}
			;

direct-declarator  :  IDENTIFIER                                         
				   {
						//printf("direct-declarator  : IDENTIFIER   \n");
									   		
						if(flag1 == 0 || flag2 == 0){
					  		$$.var = $1.var;
						  	$$.type = 0;
						  	$$.width = 1;
							//printf("string is %s\n", $1.var);
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
				   		//printf("direct-declarator -> (declarator)\n");
				   }
				   
				   |  direct-declarator '[' assignment-expression ']' '[' assignment-expression ']'   
				   {
				   		if(flag1 == 0 || flag2 == 0){
					  		type_ds *temp = new_node(MATRIX_,$3.val.int_data,$6.val.int_data);
					  		$$.type = temp;
					  		$$.width = $3.val.int_data * $6.val.int_data;
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
					//printf("direct-declarator :  direct-declarator(parameter-type-list) \n");				   		
						flag1 = 1;										
					  	$$.var = $1.var;
					  	$$.type = 0;
					  	$$.width = 1;
				   }
				   
				   |  direct-declarator '(' identifier-list ')' 		 
				   {
				   		//printf("direct-declarator -> direct-declarator(identifier-list)\n");
				   }
				   
				   |  direct-declarator '(' ')'         				 
				   {
						//printf("direct-declarator -> direct-declarator( ) \n");
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
		 	type_ds *temp = new_node(PTR,-1,-1);
	  		//$$.type = merge_node($2.type,temp);
		 }
		 
		 |  '*' 		  
		 {
		 	$$.type = new_node(PTR,-1,-1);
		 }
		 ;

parameter-type-list  :  parameter-list   
					 {
					 		//printf("parameter-type-list -> parameter-list\n");
					 }
					 ;

parameter-list  :  parameter-declaration                           
				{
					//printf("parameter-type-list -> parameter-declaration\n");
					if(flag2 == 0){										// An indication of the fact that function has not been
			  		temp_use = create_Symbol_Table();				// declared previously
			  		char* str = strdup("param");
			  		symbol_table_fields x($1.var,$1.type,0,$1.width,-1,0,str); //Insert in sym tab of function(offset comp.in insert)
			  		temp_use->insert(x);
			  		}
				}
				
				|  parameter-list ',' parameter-declaration		   
				{
					//printf("parameter-type-list -> parameter-list,parameter-declaration\n");
					char* str = strdup("param");
					if(flag2 == 0){
			  		symbol_table_fields x($3.var,$3.type,0,$3.width,-1,0,str); //Insert in sym tab of function(offset comp. in insert)
			  		temp_use->insert(x);
			  		}
				}
				;

parameter-declaration  :  declaration-specifiers declarator        
					   {
							//printf("parameter-declaration -> declaration-specifiers declarator \n");
							if(flag2 == 0){	
							
							
							
							if(($1.type)->curr_type == MATRIX_)	
					  		$$.type = $2.type; 
							else
							$$.type = $1.type;
					  		
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

				
			 	
				
				if(!t->curr_type){				
				$$.val.v = new vector<int>;
			 	(*($$.val.v)).push_back(($1.val.int_data));}
				else
				$$ = $1;
			 	
			 }
			 
			 |  '{' initializer-row-list '}' 					 
			 {
				
			 	//printf("initializer -> { initializer-row-list }\n");
			 	$$.val.v = new vector<int>;
			 	for(int i=0;i<(*($2.val.v)).size();i++)
			 		{ (*($$.val.v)).push_back((*($2.val.v))[i]); }
			 	
			 }
			 ;

initializer-row-list  :  initializer-row 							
					  {
							
					  		
					  		$$.val.v = new vector<int>;
			 				for(int i=0;i<(*($1.val.v)).size();i++)
			 					{ (*($$.val.v)).push_back((*($1.val.v))[i]); }
					  		
					  		//printf("initializer-row-list -> initializer-row\n");}
					  }
					  
					  |  initializer-row-list ';' initializer-row   
					  {
					  		
					  		$$.val.v = new vector<int>;
			 				for(int i=0;i<(*($1.val.v)).size();i++)
			 					(*($$.val.v)).push_back((*($1.val.v))[i]);

			 				for(int i=0;i<(*($3.val.v)).size();i++)
			 					{ (*($$.val.v)).push_back((*($3.val.v))[i]);  }

					  		//printf("initializer-row-list -> initializer-row-list ; initializer-row\n");}
					  }
					  ;

initializer-row  :  designation initializer                        
				 {
				 		//printf("initializer-row -> designation initializer\n");}
				 }
				 
				 |  initializer  								   
				 {  	
				 		
				 		//printf("initializer-row -> initializer\n");
				 		$$.val.v = new vector<int>;
				 		
			 				for(int i=0;i<(*($1.val.v)).size();i++)
			 					{ (*($$.val.v)).push_back((*($1.val.v))[i]); }
				 		
				 }
				 
				 |  initializer-row ',' designation initializer    
				 {
				 		//printf("initializer-row -> initializer-row, designation initializer\n");}
				 }
				 
				 |  initializer-row ',' initializer  			   
				 {
				 		
				 		$$.val.v = new vector<int>;
			 				for(int i=0;i<(*($1.val.v)).size();i++)
			 					 (*($$.val.v)).push_back((*($1.val.v))[i]);

			 				for(int i=0;i<(*($3.val.v)).size();i++)
			 					 { (*($$.val.v)).push_back((*($3.val.v))[i]); }
				 		
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
				//printf("statement -> labeled-statement\n");
		   		$$ = $1;
		   }
		   
		   |  expression-statement			
		   {
		   		//printf("statement -> expression-statement\n");
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
					  		//printf("expression-statement -> expression ;\n");
					  }
					  
					  |  ';'				
					  {
					  	         //printf("expression-statement -> ;\n");
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
							//printf("compound-statement -> {block-item-list}\n");
					}
					
					|  '{' '}' 					  
					{
							//printf("compound-statement -> {}\n");
					}
					;

block-item-list  :  block-item 					  
				 {
						//printf("block-item-list -> block-item\n");				 		 
						$$ = $1;
						
				 }
				 
				 |  block-item-list M block-item    
				 {
						//printf("block-item-list -> block-item-list M block-item\n");				 		
						backpatch($1.NL,$2);
						$$ = $3;
				 }
				 ;

block-item  :  declaration 		
			{
				//printf("block-item -> declaration\n");
			}
			
			|  statement 		
			{
				//printf("block-item -> statement\n");
				$$ = $1;
			}
			;


selection-statement  :  IF '(' expression N')' M statement N				%prec "then"       		
					 {
				//printf("selection-statement -> IF '(' expression N')' M statement N\n");					 
							backpatch($4,next_instr);
						  	conv2Bool(&$3);
						  	backpatch($3.TL,$6);
						  	$$.NL = merge($7.NL,$3.FL);
						  	$$.NL = merge($$.NL,$8);
					 }
					 
					 |  IF '(' expression N')' M statement N ELSE M statement     	 				
					 {
					 		list_node *l = 0;
						  	if(($3.type)->curr_type!=BOOL_){
						  		l = makelist(next_instr);
						  		quad_fields x(0,0,0,GOTO_);
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
						  	quad_fields x(0,0,res,GOTO_);
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
						  	quad_fields x(0,0,0,GOTO_);
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
			  			quad_fields x(arg1,0,0,RETURN_EXP);
			  			quad_array->emit(x);
				}
				
				|  RETURN ';' 				    
				{
						quad_fields x(0,0,0,RETURN_);
	  					quad_array->emit(x);
				}
				;


translation-unit  :  external-declaration  						
				  {
				  		//printf("translation-unit -> external-declaration\n");
				  }
				  
				  |  translation-unit external-declaration 		
				  {
				  		//printf("translation-unit -> translation-unit external-declaration\n");
				  }
				  ;

external-declaration  :  function-definition 		
					  {
					  		//printf("external-declaration -> function-definition\n");
					  }
					  
					  |  declaration 			
					  {
					  		//printf("external-declaration -> declaration\n");
					  }
					  ;

function-definition  :  declaration-specifiers declarator declaration-list compound-statement 		
					 {
					 		//printf("function-definition -> declaration-specifiers declarator declaration-list compound-statement\n");
					 }
					 
					 |  declaration-specifiers declarator F compound-statement 						
					 {
							//printf("function-definition -> declaration-specifiers declarator F compound-statement\n");					 			
							current = global;
							quad_fields x($2.var,0,0,Function_END);
							quad_array->emit(x);

					 }
					 ;

					  ;

declaration-list  :  declaration 						
				  {
				  		//printf("declaration-list -> declaration\n");
				  }
				  
				  |  declaration-list declaration       
				  {		
				  		//printf("declaration-list -> declaration-list declaration\n");
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
		quad_fields x(0,0,0,GOTO_);
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
		quad_fields x(t,0,0,Function);
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
