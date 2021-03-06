# include "ass4_15CS10044_translator.h"
# include "ass4_15CS10044.tab.h"
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <iostream>

using namespace std;


/* SYMBOL-TABLE IMPLEMENTATION */


symbol_table_fields::symbol_table_fields(char *name_f, tree_node *Type_f, void *initial_value_f, int size_f, int offset_f, symbolTable *nestedTable_f) : name(name_f), Type(Type_f), initial_value(initial_value_f), size(size_f), offset(offset_f), nestedTable(nestedTable_f) {}
void symbol_table_fields::operator=(symbol_table_fields &x){
	this->name = x.name;
	this->Type = x.Type;
	this->initial_value = x.initial_value;
	this->size = x.size;
	this->offset = x.offset;
	this->nestedTable = x.nestedTable;
}
symbol_table_fields::~symbol_table_fields(){}
void symbol_table_fields::print_row(){
	printf("%s\t ",name);
	print_Initial_Value(initial_value,Type);
	printf("\t");
	cout<<size<<"\t";
	cout<<offset<<"\t";
	if(nestedTable == NULL)
		cout<<"... \t";
	else
		printf("%s \t",(nestedTable->table)[0].name);
	print_Tree(Type);
}

symbolTable::symbolTable(unsigned int capacity){
	table = new symbol_table_fields[capacity];
	curr_length = -1;
}


symbolTable::~symbolTable(){}
symbol_table_fields *symbolTable::lookup(char *t){											
	int i = 0;
	for(i = 0;i<=curr_length;i++){
		if(strcmp(table[i].name,t) == 0)
			return (table + i);
	}
	return 0;
}

void print_Initial_Value(void *temp, tree_node *t){
	if(!temp)
		cout<<"... ";
	else{
		switch(t->down){
			case INT_ : cout<<(*((int *)temp))<<" ";
						break;
			case DOUBLE_ : cout<<(*((double *)temp))<<" ";
						break;
			case CHAR_ : cout<<(*((char *)temp))<<" ";
						break;
		}
	}
}

void symbolTable::insert(symbol_table_fields &x){												
	if(curr_length == -1)
		x.offset = 0;
	else
		x.offset = table[curr_length].size + table[curr_length].offset;
	curr_length++;
	table[curr_length] = x;
}


void symbolTable::print_table(){															
	int i;
	for(i=0;i<=(this->curr_length);i++){
		table[i].print_row();
		cout<<endl;
	}
}
symbol_table_fields *symbolTable::gentemp(data_types temp){
	tree_node *t = new_node(temp,-1);
	char *s = new char[10];
	sprintf(s,"t%d",temp_count);
	temp_count++;
	int temp_size = 0;
	switch(temp){
		case INT_ : temp_size = INT_SIZE;
					break;
		case CHAR_ : temp_size = CHAR_SIZE;
					break;
		case DOUBLE_ : temp_size = DOUBLE_SIZE;
					break;
		case PTR : temp_size = PTR_SIZE;
					break;
	}
	symbol_table_fields x(s,t,0,temp_size,-1,0);
	this->insert(x);
	return &((this->table)[curr_length]);
}


symbolTable *create_Symbol_Table(){										
	symbolTable *st = new symbolTable(MAX_SIZE);
	return st;
}


void print_Tree(tree_node *temp){
	while(temp){
		switch(temp->down){
			case ARRAY : cout<<"array ";
			break;
			case MATRIX : cout<<"matrix";
			break;
			case VOID_ : cout<<"void ";
			break;
			case INT_ : cout<<"int ";
			break;
			case DOUBLE_ : cout<<"double ";
			break;
			case CHAR_ : cout<<"char ";
			break;
			case PTR : cout<<"ptr ";
			break;
			case FUNCTION : cout<<"function ";
			break;
			default : cout<<"No Type ";
		}
		if(temp->l)
			cout<<*(temp->l)<<" ";
		temp = temp->r;
	}
}



tree_node *new_node(data_types t, int val){
	tree_node *temp = new tree_node;
	temp->down = t;

	if(t == ARRAY)
		temp->l = new int(val);
	else
		temp->l = 0;

	temp->r = 0;

	return temp;
}





/* QUAD_FIELDS IMPLEMENTATION */

quad_fields::quad_fields(char *arg1_f, char *arg2_f, char *res_f, quad_instr_types op_f, symbol_table_fields *arg1_loc_f, symbol_table_fields *arg2_loc_f, symbol_table_fields *res_loc_f) : arg1(arg1_f), arg2(arg2_f), res(res_f), op(op_f), arg1_loc(arg1_loc_f), arg2_loc(arg2_loc_f), res_loc(res_loc_f) {}

quad_fields::~quad_fields() {}

void quad_fields::operator=(quad_fields &x){
	this->arg1 = x.arg1;
	this->arg2 = x.arg2;
	this->res = x.res;
	this->op = x.op;
	this->arg1_loc = x.arg1_loc;
	this->arg2_loc = x.arg2_loc;
	this->res_loc = x.res_loc;
}

void quad_fields::print_quad_fields(int line){
	if(this->arg2){
		switch(this->op){
			case PLUS : printf("%3d : %s = %s + %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case MINUS : printf("%3d : %s = %s - %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case INTO : printf("%3d : %s = %s * %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case DIV : printf("%3d : %s = %s / %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case PERCENT : printf("%3d : %s = %s %% %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case SL : printf("%3d : %s = %s << %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case SR : printf("%3d : %s = %s >> %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case LT : printf("%3d : %s = %s < %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case LTE : printf("%3d : %s = %s <= %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case GT : printf("%3d : %s = %s > %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case GTE : printf("%3d : %s = %s >= %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case EQ : printf("%3d : %s = %s == %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case NEQ : printf("%3d : %s = %s != %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case BW_AND : printf("%3d : %s = %s & %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case BW_XOR : printf("%3d : %s = %s ^ %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case BW_INOR : printf("%3d : %s = %s | %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case LOG_AND : printf("%3d : %s = %s && %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case LOG_OR : printf("%3d : %s = %s || %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case goto_LT : printf("%3d : if %s < %s goto %s\n",line,this->arg1,this->arg2,this->res);
						break;
			case goto_LTE : printf("%3d : if %s <= %s goto %s\n",line,this->arg1,this->arg2,this->res);
						break;
			case goto_GT : printf("%3d : if %s > %s goto %s\n",line,this->arg1,this->arg2,this->res);
						break;
			case goto_GTE : printf("%3d : if %s >= %s goto %s\n",line,this->arg1,this->arg2,this->res);
						break;
			case goto_EQ : printf("%3d : if %s == %s goto %s\n",line,this->arg1,this->arg2,this->res);
						break;
			case goto_NEQ : printf("%3d : if %s != %s goto %s\n",line,this->arg1,this->arg2,this->res);
						break;
			case call : printf("%3d : %s = call %s, %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case EQ_BRACKET : printf("%3d : %s = %s[%s]\n",line,this->res,this->arg1,this->arg2);
						break;
			case BRACKET_EQ : printf("%3d : %s[%s] = %s\n",line,this->arg1,this->arg2,this->res);
						break;
		}
	}
	else{
		switch(this->op){
			case U_PLUS : printf("%3d : %s = %s\n",line,this->res,this->arg1);
						break;
			case U_MINUS : printf("%3d : %s = - %s\n",line,this->res,this->arg1);
						break;
			case BW_U_NOT : printf("%3d : %s = ~%s\n",line,this->res,this->arg1);
						break;
			case U_NEGATION : printf("%3d : %s = !%s\n",line,this->res,this->arg1);
						break;
			case U_ADDR : printf("%3d : %s = & %s\n",line,this->res,this->arg1);
						break;
			case U_STAR : printf("%3d : %s = * %s\n",line,this->res,this->arg1);
						break;
			case ASSIGN : printf("%3d : %s = %s\n",line,this->res,this->arg1);
						break;
			case GOTO_ : printf("%3d : goto %s\n",line,this->res);
						break;
			case IF_GOTO : printf("%3d : if %s goto %s\n",line,this->arg1,this->res);
						break;
			case IF_FALSE_GOTO : printf("%3d : ifFalse %s goto %s\n",line,this->arg1,this->res);
						break;
			case PARAM : printf("%3d : param %s\n",line,this->arg1);
						break;
			case RETURN_EXP : printf("%3d : return %s\n",line,this->arg1);
						break;
			case RETURN_ : printf("%3d : return\n",line);
						break;
			case Function : printf("%3d : %s : \n",line,arg1);
						break;
		}
	}
}



quadArray::quadArray(unsigned int capacity = MAX_SIZE){
	quad_Table = new quad_fields[capacity];
	next_instr = 0;
}
void quadArray::emit(quad_fields &x){
	quad_Table[next_instr++] = x;
}

void quadArray::print_quadArray(){
	int i;
	for(i = 0;i < next_instr;i++){
		quad_Table[i].print_quad_fields(i);
	}
}

void quadArray::fill_dangling_goto(int index, int data){
	char *temp = new char[10];
	sprintf(temp,"%d",data);
	((this->quad_Table)[index]).res = temp;
}



/* SOME OTHER GLOBAL FUNCTIONS */



tree_node *merge_node(tree_node *sub, tree_node *one_node){
	if(!sub) return one_node;
	tree_node *temp = sub;
	while(temp->r)
		temp = temp->r;
	temp->r = one_node;
	return sub;
}

list_node *makelist(int id){
	list_node *temp = new list_node;
	temp->index_list = id;
	temp->next = 0;
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

void backpatch(list_node *l, int data){
	list_node *temp = l;
	while(temp){
		quad_array->fill_dangling_goto(temp->index_list,data);
		temp = temp->next;
	}
}

int typecheck(tree_node *t1, tree_node *t2){
	if(!t1 && !t2) return 1;
	if(!t1) return 0;
	if(!t2) return 0;
	return (t1->down == t2->down) && typecheck(t1->r,t2->r);
}

void conv2Bool(expression_attribute *E){
	if(((E->type)->down) != BOOL_){
		E->FL = makelist(next_instr);
		char *arg1 = strdup((E->loc)->name);
		char *arg2 = new char[10];
		sprintf(arg2,"0");
		quad_fields x(arg1,arg2,0,goto_EQ,E->loc,0,0);
		quad_array->emit(x);
		E->TL = makelist(next_instr);
		quad_fields y(0,0,0,GOTO_,0,0,0);
		quad_array->emit(y);
	}
}

int compute_width(tree_node *temp){
	if(!temp) return 0;
	int width = 1;
	while(temp){
		switch(temp->down){
			case ARRAY : width *= (*temp->l);
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
		if(temp->down == PTR)
			break;
		temp = temp->r;
	}
	return width;
}

parameter_list *make_param_list(symbol_table_fields *p){
	parameter_list *temp = new parameter_list;
	temp->parameter = p;
	temp->next = 0;
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


tree_node *t = 0;
int w;
symbolTable *global = 0;
symbolTable *current = 0;
symbolTable *temp_use = 0;
int flag1 = 0;
int flag2 = 0;
int c = 0;
char *func_name;								
int line_count = 0;
int temp_count = 0;
int next_instr = 0;
quadArray *quad_array = 0;
int flag_array = 0;


int main(){
  global = create_Symbol_Table();
  current = global;
  quad_array = new quadArray(10000);
  int x = yyparse();
  printf("Global Symbol Table : \n");
  global->print_table();
  int i,j;
  for(i=0;i<=global->curr_length;i++){
  	if((global->table[i]).nestedTable){
  		printf("%s Symbol table :  \n",(global->table[i]).name);
  		((global->table[i]).nestedTable)->print_table();
  	}
  }
  quad_array->print_quadArray();
  return 0;
}