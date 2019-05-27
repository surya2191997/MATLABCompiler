# include "ass4_15CS10044_translator.h"
# include "ass4_15CS10044.tab.h"
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <iostream>
# include <bits/stdc++.h>

using namespace std;


/* SYMBOL-TABLE IMPLEMENTATION */


symbol_table_fields::symbol_table_fields(char *name_init, type_ds *Type_init, void *initial_value_init, int size_init, int offset_init, symbolTable *nestedTable_init) :  nestedTable(nestedTable_init), name(name_init), Type(Type_init), initial_value(initial_value_init), size(size_init), offset(offset_init) {}

void symbol_table_fields::print_row(){
	
	cout<<name<<"\t";
	print_Initial_Value(initial_value,Type);
	printf("\t");
	cout<<size<<"\t";
	cout<<offset<<"\t";
	if(!nestedTable)
		cout<<"--- \t";
	else
		cout<<(nestedTable->table)[0].name<<"\t";
	print_Tree(Type);
}

void symbol_table_fields::operator=(symbol_table_fields &x){
	
	this->nestedTable = x.nestedTable;
	this->name = x.name;
	this->Type = x.Type;
	this->initial_value = x.initial_value;
	this->size = x.size;
	this->offset = x.offset;
}





symbolTable::symbolTable(unsigned int capacity){
	curr_length = -1;	
	table = new symbol_table_fields[capacity];
}

symbol_table_fields::~symbol_table_fields(){}


symbolTable::~symbolTable(){}


void print_Initial_Value(void *temp, type_ds *t){
		
	int i,j,k=0;
	if(temp == NULL)
		cout<<"--- ";
	else if(t->curr_type == INT_)
		 cout<<(*((int *)temp))<<" ";
	else if(t->curr_type == DOUBLE_)
		cout<<(*((double *)temp))<<" ";
	else if(t->curr_type == CHAR_)
		cout<<(*((char *)temp))<<" ";
	
	else if(t->curr_type == MATRIX_){
		
		vector<double>* v = static_cast<vector<double>*>(temp );
		
		cout<<"{";
		for(i=0;i<*(t->l);i++)
		{
			for(j=0;j<*(t->r);j++)
				{
					cout<<(*v)[k++]<<",";
				}		
		
		cout<<";";		
		}
		cout<<"}";
		
	}
	

	

	
	
}



void symbolTable::insert(symbol_table_fields &x){												
	if(curr_length != -1)
		x.offset = table[curr_length].offset + table[curr_length].size ;
	else
		x.offset = 0;
	table[++curr_length] = x;
	
}


symbol_table_fields *symbolTable::lookup(char *t){											
	int i = 0;
	while(i<=curr_length){
		if(strcmp(table[i].name,t) == 0)
			return (table + i);
		i++;
	}
	return 0;
}




symbol_table_fields *symbolTable::gentemp(type_ds* temp){
	char *s = new char[10];
	type_ds *t = temp;
	sprintf(s,"t%d",temp_count);
	temp_count++;
	int temp_size = 0;

	if(temp->curr_type == PTR)
		temp_size = PTR_SIZE;
	else if(temp->curr_type == DOUBLE_)
		temp_size = DOUBLE_SIZE;
	else if(temp->curr_type == CHAR_)
		temp_size = CHAR_SIZE;
	else if(temp->curr_type == INT_)
		temp_size = INT_SIZE;
	else if(temp->curr_type == MATRIX_)
		temp_size = compute_width(temp);


	symbol_table_fields y(s,t,0,temp_size,-1,0);
	this->insert(y);
	return &((this->table)[curr_length]);
}


void symbolTable::print_table(){															
	int i = 0;
	while(i<=this->curr_length){
		table[i].print_row();
		cout<<endl;
		i++;
	}
}



symbolTable *create_Symbol_Table(){										
	symbolTable *st = new symbolTable(MAX_SIZE);
	return st;
}


void print_Tree(type_ds *temp){

		if(temp->curr_type == MATRIX_)
			cout<<"matrix "<<*(temp->l)<<" "<<*(temp->r);
		else if(temp->curr_type == VOID_)
			cout<<"void ";
		else if(temp->curr_type == INT_)
			cout<<"int ";
		else if(temp->curr_type == CHAR_)
			cout<<"char ";
		else if(temp->curr_type == DOUBLE_)
			cout<<"double ";
		else if(temp->curr_type == PTR)
			cout<<"ptr ";
		else if(temp->curr_type == FUNCTION)
			cout<<"function ";
		else 
			cout<<"No Type ";
	
}




type_ds *new_node(data_types t, int val1, int val2){
	type_ds *temp = new type_ds;
	temp->curr_type = t;

	if(t == MATRIX_){
		temp->l = new int(val1);
		temp->r = new int(val2);
	}
	else{
		temp->l = 0;
		temp->r = 0;
	}

	return temp;
}





/* QUAD_FIELDS IMPLEMENTATION */

quad_fields::quad_fields(char *arg1_f, char *arg2_f, char *res_f, quad_instr_types op_f) : res(res_f), op(op_f), arg1(arg1_f), arg2(arg2_f) {}

quad_fields::~quad_fields() {}


quadArray::quadArray(unsigned int capacity = MAX_SIZE){
	next_instr = 0;	
	quad_Table = new quad_fields[capacity];
	
}

void quad_fields::operator=(quad_fields &x){
	
	this->res = x.res;
	this->op = x.op;
	this->arg1 = x.arg1;
	this->arg2 = x.arg2;
	
}


void quadArray::emit(quad_fields &x){
	quad_Table[next_instr++] = x;
}

void quadArray::print_quadArray(){
	int i=0;
	while(i < next_instr){
		quad_Table[i].print_quad_fields(i);
		i++;
	}
}

void quadArray::fill_dangling_goto(int index, int data){
	char *temp = new char[10];
	sprintf(temp,"%d",data);
	((this->quad_Table)[index]).res = temp;
}






void quad_fields::print_quad_fields(int line){
	
	if(this->arg2){
		
			if(this->op == PLUS)  printf("%3d : %s = %s + %s\n",line,this->res,this->arg1,this->arg2);
						
			else if(this->op == goto_GTE)  printf("%3d : if %s >= %s goto %s\n",line,this->arg1,this->arg2,this->res);
						
			else if(this->op == goto_EQ)  printf("%3d : if %s == %s goto %s\n",line,this->arg1,this->arg2,this->res);
						
			else if(this->op == goto_NEQ)  printf("%3d : if %s != %s goto %s\n",line,this->arg1,this->arg2,this->res);
						
			else if(this->op == call)  printf("%3d : %s = call %s, %s\n",line,this->res,this->arg1,this->arg2);
						
			else if(this->op == EQ_BRACKET)  printf("%3d : %s = %s[%s]\n",line,this->res,this->arg1,this->arg2);
						
			else if(this->op == BRACKET_EQ)  printf("%3d : %s[%s] = %s\n",line,this->arg1,this->arg2,this->res);

			else if(this->op == MINUS)  printf("%3d : %s = %s - %s\n",line,this->res,this->arg1,this->arg2);
						
			else if(this->op == INTO)  printf("%3d : %s = %s * %s\n",line,this->res,this->arg1,this->arg2);
						
			else if(this->op == DIV)  printf("%3d : %s = %s / %s\n",line,this->res,this->arg1,this->arg2);
						
			else if(this->op == PERCENT)  printf("%3d : %s = %s %% %s\n",line,this->res,this->arg1,this->arg2);
						
			else if(this->op == SL)  printf("%3d : %s = %s << %s\n",line,this->res,this->arg1,this->arg2);
					
			else if(this->op == SR)  printf("%3d : %s = %s >> %s\n",line,this->res,this->arg1,this->arg2);
						
			else if(this->op == LT)  printf("%3d : %s = %s < %s\n",line,this->res,this->arg1,this->arg2);
						
			else if(this->op == LTE)  printf("%3d : %s = %s <= %s\n",line,this->res,this->arg1,this->arg2);
					
			else if(this->op == GT)  printf("%3d : %s = %s > %s\n",line,this->res,this->arg1,this->arg2);
						
			else if(this->op == GTE)  printf("%3d : %s = %s >= %s\n",line,this->res,this->arg1,this->arg2);
						
			else if(this->op == EQ)  printf("%3d : %s = %s == %s\n",line,this->res,this->arg1,this->arg2);
						
			else if(this->op == NEQ)  printf("%3d : %s = %s != %s\n",line,this->res,this->arg1,this->arg2);
			
			else if(this->op == BW_AND)  printf("%3d : %s = %s & %s\n",line,this->res,this->arg1,this->arg2);
						
			else if(this->op == BW_XOR)  printf("%3d : %s = %s ^ %s\n",line,this->res,this->arg1,this->arg2);
					
			else if(this->op == BW_INOR)  printf("%3d : %s = %s | %s\n",line,this->res,this->arg1,this->arg2);
				
			else if(this->op == LOG_AND)  printf("%3d : %s = %s && %s\n",line,this->res,this->arg1,this->arg2);
						
			else if(this->op == LOG_OR)  printf("%3d : %s = %s || %s\n",line,this->res,this->arg1,this->arg2);
						
			else if(this->op == goto_LT)  printf("%3d : if %s < %s goto %s\n",line,this->arg1,this->arg2,this->res);
						
			else if(this->op == goto_LTE)  printf("%3d : if %s <= %s goto %s\n",line,this->arg1,this->arg2,this->res);
					
			else if(this->op == goto_GT)  printf("%3d : if %s > %s goto %s\n",line,this->arg1,this->arg2,this->res);
				
	}

	else{
		
			if(this->op == U_PLUS)  printf("%3d : %s = %s\n",line,this->res,this->arg1);
						
			else if(this->op == U_MINUS)  printf("%3d : %s = - %s\n",line,this->res,this->arg1);
						
			else if(this->op == BW_U_NOT)  printf("%3d : %s = ~%s\n",line,this->res,this->arg1);
						
			else if(this->op == U_NEGATION)  printf("%3d : %s = !%s\n",line,this->res,this->arg1);
						
			else if(this->op == U_ADDR)  printf("%3d : %s = & %s\n",line,this->res,this->arg1);
						
			else if(this->op == U_STAR)  printf("%3d : %s = * %s\n",line,this->res,this->arg1);
						
			else if(this->op == ASSIGN)  printf("%3d : %s = %s\n",line,this->res,this->arg1);
						
			else if(this->op == GOTO_)  printf("%3d : goto %s\n",line,this->res);
						
			else if(this->op == IF_GOTO)  printf("%3d : if %s goto %s\n",line,this->arg1,this->res);
						
			else if(this->op == IF_FALSE_GOTO)  printf("%3d : ifFalse %s goto %s\n",line,this->arg1,this->res);
						
			else if(this->op == PARAM)  printf("%3d : param %s\n",line,this->arg1);
						
			else if(this->op == RETURN_EXP)  printf("%3d : return %s\n",line,this->arg1);
						
			else if(this->op == RETURN_)  printf("%3d : return\n",line);
						
			else if(this->op == Function)  printf("%3d : %s : \n",line,arg1);
						
			else if(this->op == TRA_OP_)  printf("%3d : %s = transpose %s\n",line,this->res,this->arg1);
						

		
	}
}





/* SOME OTHER GLOBAL FUNCTIONS */

void backpatch(list_node *l, int data){
	list_node *temp = l;
	while(temp){
		quad_array->fill_dangling_goto(temp->index_list,data);
		temp = temp->next;
	}
}

int typecheck(type_ds *t1, type_ds *t2){
	if(!t1 && !t2) return 1;
	if(!t1) return 0;
	if(!t2) return 0;
	return (t1->curr_type == t2->curr_type);
}

list_node *makelist(int id){
	list_node *temp = new list_node;
	temp->next = 0;
	temp->index_list = id;
	return temp;
}

list_node *merge(list_node *l1, list_node *l2){
	if(!l1) return l2;
	if(!l2) return l1;
	list_node *temp = l1;
	while(temp->next)
		temp = temp->next;
	temp->next = l2;
	return l1;
}




int typecheck_mulex(type_ds *t1, type_ds *t2){
	if(!t1 && !t2) return 1;
	if(!t1) return 0;
	if(!t2) return 0;
	
	if(t1->curr_type == t2->curr_type)
		if(t1->curr_type == 0)
			if(*(t1->l) == *(t1->r))
				return 1;
			else
				return 0;			
		else
			return 1;

	else
		if((t1->curr_type == INT_ && t2->curr_type == MATRIX_) || (t1->curr_type == MATRIX_ && t2->curr_type == INT_))
			return 1;
		else
			return 0;
	
}


int typecheck_addex(type_ds *t1, type_ds *t2){
	if(!t1 && !t2) return 1;
	if(!t1) return 0;
	if(!t2) return 0;

	if(t1->curr_type == t2->curr_type)
		if(t1->curr_type!=0)
			return 1;
		else if(*(t1->l) == *(t2->l) && *(t1->r) == *(t2->r))
			return 1;
		     else
			return 0;

	else
		return 0;


	
}



void conv2Bool(expression_attribute *E){
	if(((E->type)->curr_type) != BOOL_){
		E->FL = makelist(next_instr);
		char *arg1 = strdup((E->loc)->name);
		char *arg2 = new char[10];
		sprintf(arg2,"0");
		quad_fields x(arg1,arg2,0,goto_EQ);
		quad_array->emit(x);
		E->TL = makelist(next_instr);
		quad_fields y(0,0,0,GOTO_);
		quad_array->emit(y);
	}
}

int compute_width(type_ds *temp){
	if(!temp) return 0;
	int width = 1;
	
		switch(temp->curr_type){
			case MATRIX : width *= (*temp->l);
				      width *= (*temp->r);
				      width *= 8;
				      width += 8;
				      break;
			case INT_ : width *= 4;
						break;
			case DOUBLE_ : width *= 8;
						break;
			case CHAR_ : width *= 1;
						break;
			case PTR : width *= 4;
						break;
		}
		
		

	return width;
}

parameter_list *make_param_list(symbol_table_fields *p){
	parameter_list *temp = new parameter_list;
	temp->next = 0;	
	temp->parameter = p;
	return temp;
}

parameter_list *merge_param_list(parameter_list *l1, parameter_list *l2){
	if(!l1) return l2;
	if(!l2) return l1;
	parameter_list *temp = l1;
	while(temp->next)
		temp = temp->next;
	temp->next = l2;
	return l1;
}


type_ds *t = 0;
int w;
int flag1 = 0;
int flag2 = 0;
int c = 0;								
int line_count = 1;
int temp_count = 0;
int next_instr = 0;
int my_var = 0;
char *func_name;
quadArray *quad_array = 0;
symbolTable *global = 0;
symbolTable *current = 0;
symbolTable *temp_use = 0;



int main(){
  int i=0,y;
  global = create_Symbol_Table();
  current = global;
  quad_array = new quadArray(10000);
  y = yyparse();
  printf("GLOBAL SYMBOL TABLE : \n");
  global->print_table();
  while(i<=global->curr_length){
  	if((global->table[i]).nestedTable){
  		printf("%s Symbol table :  \n",(global->table[i]).name);
  		((global->table[i]).nestedTable)->print_table();
  	}
	i++;
  }
  quad_array->print_quadArray();
  return 0;
}
