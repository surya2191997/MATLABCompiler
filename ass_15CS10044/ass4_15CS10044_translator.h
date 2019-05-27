#ifndef ASS5_15CS10044_TRANSLATOR_HEADER
#define ASS5_15CS10044_TRANSLATOR_HEADER

// Size of different data types

# define CHAR_SIZE 1
# define INT_SIZE 4
# define DOUBLE_SIZE 8
# define PTR_SIZE 4


// Maximum size of symbol table
# define MAX_SIZE 5000


extern int c, w, flag1, flag2, temp_count, next_instr, flag_array;




enum data_types { ARRAY,  PTR, FUNCTION, VOID_, CHAR_, INT_, DOUBLE_, BOOL_};

enum quad_instr_types {DEFAULT_, PLUS, MINUS, INTO, DIV, PERCENT, U_PLUS, U_MINUS, BW_U_NOT,U_NEGATION, 
				SL, SR, LT, LTE, GT, GTE, EQ, NEQ, BW_AND, BW_XOR, PARAM, RETURN_EXP, RETURN_, Function,
  				BW_INOR, LOG_AND, LOG_OR, goto_LT, goto_LTE, goto_GT, goto_GTE, goto_EQ, goto_NEQ, call,
    			EQ_BRACKET, BRACKET_EQ, U_ADDR, U_STAR, ASSIGN, GOTO_, IF_GOTO, IF_FALSE_GOTO};


typedef struct list_node{														
	int index_list;
	struct list_node *next; 
}list_node; 



typedef struct tree_node{													
	data_types down;
	int *l;
	struct tree_node *r;
}tree_node;
extern tree_node *t;



class symbol_table_fields; 
class symbolTable;

class symbol_table_fields{													
	public:
	void *initial_value;
	int size;
	char *name;
	tree_node *Type;
	int offset; 
	symbolTable *nestedTable;
	void print_row();
	symbol_table_fields(char * = 0 , tree_node * = 0, void * = 0, int = -1, int = -1, symbolTable * = 0); 
	void operator=(symbol_table_fields &);
	~symbol_table_fields();
};

typedef struct parameter_list{
	symbol_table_fields *parameter;
	struct parameter_list *next;
}parameter_list;

typedef struct quad_fields{
	char *arg1;
	char *arg2;
	char *res;
	quad_instr_types op;
	symbol_table_fields *arg1_loc;
	symbol_table_fields *arg2_loc;
	symbol_table_fields *res_loc;
	quad_fields(char * = 0, char * = 0, char * = 0, quad_instr_types = DEFAULT_, symbol_table_fields * = 0, symbol_table_fields * = 0, symbol_table_fields * = 0);
	~quad_fields();
	void operator=(struct quad_fields &);
	void print_quad_fields (int);
}quad_fields;


typedef union attribute{										
	int int_data;
	double double_data;
	char char_data;
}attribute;

typedef struct expression_attribute{                                                
	symbol_table_fields *loc;													
	list_node *TL;															
	list_node *FL;
	list_node *NL;															
	tree_node *type;														
	symbol_table_fields *array;
	symbol_table_fields *loc1;														
	attribute val;																	
}expression_attribute;

typedef struct variable_declaration_attribute{												
	tree_node *type;
	int width;
	char *var;
}variable_declaration_attribute;

typedef struct id_attribute{														
	symbol_table_fields *loc;
	char *var;
}id_attribute;

class symbolTable{
public:
	symbol_table_fields *table;
	int curr_length;
	symbolTable(unsigned int);
	~symbolTable();
	symbol_table_fields *lookup(char *);
	void insert(symbol_table_fields &);
	symbol_table_fields *gentemp(data_types);
	void print_table();
};

class quadArray{
public:
	quad_fields *quad_Table;
	quadArray(unsigned int);
	~quadArray();
	void emit(quad_fields &);
	void print_quadArray();
	void fill_dangling_goto(int,int);
};
extern quadArray *quad_array;	


symbolTable *create_Symbol_Table();
void print_Tree(tree_node *);
void print_Initial_Value(void *,tree_node *);
tree_node *new_node(data_types ,int);
tree_node *merge_node(tree_node *, tree_node *);
list_node *makelist(int);
list_node *merge(list_node *, list_node *);
void backpatch(list_node *, int);
int typecheck(tree_node *,tree_node *);
void conv2Bool(expression_attribute *);
int compute_width(tree_node *);
parameter_list *make_param_list(symbol_table_fields *);
parameter_list *merge_param_list(parameter_list *, parameter_list *);
extern symbolTable *global;
extern symbolTable *current;
extern symbolTable *temp_use;
#endif





