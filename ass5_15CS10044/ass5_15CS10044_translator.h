#ifndef ASS5_15CS10044_TRANSLATOR_HEADER
#define ASS5_15CS10044_TRANSLATOR_HEADER

// Size of different data types

# define CHAR_SIZE 1
# define INT_SIZE 4
# define DOUBLE_SIZE 8
# define PTR_SIZE 4


// Maximum size of symbol table
# define MAX_SIZE 5000
# include <bits/stdc++.h>
using namespace std;


extern int next_instr, line_count, c, w, flag2, flag1, temp_count, my_var;


enum quad_instr_types {RETURN_, Function, Function_END, BW_INOR, LOG_AND, LOG_OR, goto_LT, goto_LTE, goto_GT, goto_GTE, goto_EQ, goto_NEQ, call, EQ_BRACKET, BRACKET_EQ, U_ADDR, U_STAR, ASSIGN, GOTO_, IF_GOTO, IF_FALSE_GOTO, TRA_OP_, DEFAULT_, PLUS, MINUS, INTO, DIV, PERCENT, U_PLUS, 			       U_MINUS, BW_U_NOT,U_NEGATION, SL, SR, LT, LTE, GT, GTE, EQ, NEQ, BW_AND, BW_XOR, PARAM, RETURN_EXP};

enum data_types { MATRIX_, CHAR_, INT_, DOUBLE_, BOOL_, PTR, FUNCTION, VOID_};





typedef struct list_node{														
	struct list_node *next; 	
	int index_list;
	
}list_node; 



typedef struct type_ds{													
	int *l;
	int *r;	
	data_types curr_type;
}type_ds;
extern type_ds *t;



class symbolTable;
class symbol_table_fields; 




class symbol_table_fields{													
	public:
	int offset; 
	symbolTable *nestedTable;
	void print_row();
	void *initial_value;
	int size;
	char *name;
	char* scope;
	type_ds *Type; 
	void operator=(symbol_table_fields &);
	symbol_table_fields(char * = 0 , type_ds * = 0, void * = 0, int = -1, int = -1, symbolTable * = 0, char* = 0);	
	~symbol_table_fields();
};

typedef struct parameter_list{
	struct parameter_list *next;
	symbol_table_fields *parameter;
}parameter_list;

typedef struct quad_fields{
	char *res;
	char *arg1;
	char *arg2;
	quad_instr_types op;
	int labelIdx;
	void operator=(struct quad_fields &);
	void print_quad_fields (int);
	void genTargetCode(FILE*);
	quad_fields(char * = 0, char * = 0, char * = 0, quad_instr_types = DEFAULT_);
	~quad_fields();
}quad_fields;


typedef union attribute{										
	char char_data;
	int int_data;
	double double_data;
	vector<int>* v;
}attribute;

typedef struct expression_attribute{                                                
	symbol_table_fields *loc;													
												
	type_ds *type;														
	symbol_table_fields *mat;
	symbol_table_fields  *mat_offset_loc;														
	attribute val;			
	list_node *TL;															
	list_node *FL;
	list_node *NL;															
}expression_attribute;



typedef struct variable_declaration_attribute{												
	char *var;
	int width;	
	type_ds *type;
}variable_declaration_attribute;

typedef struct id_attribute{														
	char *var;	
	symbol_table_fields *loc;
	
}id_attribute;

class symbolTable{
public:
	int curr_length;
	symbol_table_fields *table;
	int sizeLocal;
	int sizeParam;
	symbol_table_fields *gentemp(type_ds *);
	void print_table();	
	symbol_table_fields *lookup(char *);
	void insert(symbol_table_fields &);
	symbolTable(unsigned int);
	~symbolTable();
};

class quadArray{
public:
	quad_fields *quad_Table;
	void print_quadArray();
	void fill_dangling_goto(int,int);
	void emit(quad_fields &);
	quadArray(unsigned int);
	~quadArray();
};


extern quadArray *quad_array;	
int typecheck(type_ds *,type_ds *);
int typecheck_addex(type_ds *,type_ds *);
int typecheck_mulex(type_ds *,type_ds *);
void conv2Bool(expression_attribute *);
int compute_width(type_ds *);
parameter_list *make_param_list(symbol_table_fields *);
parameter_list *merge_param_list(parameter_list *, parameter_list *);
void print_Tree(type_ds *);
void print_Initial_Value(void *,type_ds *);
type_ds *new_node(data_types ,int, int);
list_node *makelist(int);
list_node *merge(list_node *, list_node *);
void backpatch(list_node *, int);
extern symbolTable *global;
extern symbolTable *current;
extern symbolTable *temp_use;
symbolTable *create_Symbol_Table();
#endif
