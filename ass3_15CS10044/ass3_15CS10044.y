%{
#include <stdio.h>
int yyerror(char *);

%}
jump
%token CONSTANT IDENTIFIER STRING

%token UNSIGNED BREAK RETURN VOID CASE FLOAT SHORT CHAR FOR SIGNED WHILE GOTO BOOL CONTINUE IF DEFAULT DO INT SWITCH DOUBLE LONG ELSE MATRIX 

%token PTR_OP INC_OP DEC_OP LSHIFT_OP RSHIFT_OP LEQ_OP GEQ_OP EQ_OP NEQ_OP AND_OP OR_OP MULA_OP DIVA_OP REMA_OP ADDA_OP SUBA_OP LSA_OP RSA_OP ANDA_OP POWA_OP ORA_OP TRA_OP

%nonassoc "then"
%nonassoc ELSE

%start translation-unit

%%





/* EXPRESSIONS */


primary-expression:    IDENTIFIER						{printf("primary-expression -> IDENTIFIER\n");}		
					 | CONSTANT 						{printf("primary-expression -> CONSTANT\n");}	
					 | STRING							{printf("primary-expression -> STRING\n"); }
					 | '(' expression ')'				{printf("primary-expression -> (expression)\n");}
					 ;


postfix-expression:     primary-expression										{printf("postfix-expression -> primary-expression\n");}
					  | postfix-expression '[' expression ']'					{printf("postfix-expression -> postfix-expression[expression]\n");}
					  | postfix-expression '(' argument-expression-list ')'		{printf("postfix-expression -> postfix-expression(argument-expression-list)\n");}
					  | postfix-expression '(' ')'								{printf("postfix-expression -> postfix-expression()\n");}
					  | postfix-expression '.' IDENTIFIER 						{printf("postfix-expression -> postfix-expression.IDENTIFIER\n");}
					  | postfix-expression PTR_OP IDENTIFIER 					{printf("postfix-expression -> postfix-expression -> IDENTIFIER\n");}
					  | postfix-expression INC_OP  								{printf("postfix-expression -> postfix-expression ++\n");} 			
					  | postfix-expression DEC_OP 								{printf("postfix-expression -> postfix-expression --\n");}
					  | postfix-expression TRA_OP								{printf("postfix-expression -> postfix-expression .'\n");}
					  ;

argument-expression-list  :  assignment-expression                               {printf("argument-expression-list -> assignment-expression\n");}
						  |  argument-expression-list ',' assignment-expression  {printf("argument-expression-list -> argument-expression-list,assignment-expression\n");}
						  ;

unary-operator  :  '&'                 {printf("unary-operator -> &\n");}
				|  '*' 				   {printf("unary-operator -> *\n");}
				|  '+' 				   {printf("unary-operator -> +\n");}
				|  '-' 				   {printf("unary-operator -> -\n");}
				;

unary-expression  : postfix-expression         			{printf("unary-expression -> postfix-expression\n");}
				  |	INC_OP unary-expression    			{printf("unary-expression -> ++ unary-expression\n");}
				  | DEC_OP unary-expression 			{printf("unary-expression -> -- unary-expression\n");}
				  |  unary-operator cast-expression 	{printf("unary-expression -> unary-operator cast-expression\n");}
				  ;

cast-expression  :  unary-expression 					{printf("cast-expression -> unary-expression\n");}
				;

multiplicative-expression  :  cast-expression 			                      		{printf("multiplicative-expression -> cast-expression\n");}
						   |  multiplicative-expression '*' cast-expression 		{printf("multiplicative-expression -> multiplicative-expression * cast-expression\n");}
						   |  multiplicative-expression '/' cast-expression 		{printf("multiplicative-expression -> multiplicative-expression / cast-expression\n");}	
						   |  multiplicative-expression '%' cast-expression         {printf("multiplicative-expression -> multiplicative-expression MOD cast-expression\n");}
						   ;

additive-expression  :  multiplicative-expression                           {printf("additive-expression -> multiplicative-expression\n");}
					 |  additive-expression '+' multiplicative-expression   {printf("additive-expression -> additive-expression + multiplicative-expression\n");}
					 |  additive-expression '-' multiplicative-expression   {printf("additive-expression -> additive-expression - multiplicative-expression\n");}
					 ;

shift-expression  :  additive-expression 										{printf("shift-expression -> additive-expression\n");}
				  |  shift-expression LSHIFT_OP additive-expression             {printf("shift-expression -> shift-expression << additive-expression\n");}
				  |  shift-expression RSHIFT_OP additive-expression         	{printf("shift-expression -> shift-expression >> additive-expression\n");}
				  ;

relational-expression  :  shift-expression                                  	{printf("relational-expression -> shift-expression\n");}
					   |  relational-expression '<' shift-expression   			{printf("relational-expression -> relational-expression < shift-expression\n");}
					   |  relational-expression '>' shift-expression 			{printf("relational-expression -> relational-expression > shift-expression\n");}
					   |  relational-expression LEQ_OP shift-expression    		{printf("relational-expression -> relational-expression <= shift-expression\n");}
					   |  relational-expression GEQ_OP shift-expression         {printf("relational-expression -> relational-expression >= shift-expression\n");}
					   ;

equality-expreesion  :  relational-expression 									{printf("equality-expreesion -> relational-expression\n");}
					 |  equality-expreesion EQ_OP relational-expression         {printf("equality-expreesion -> equality-expreesion == relational-expression\n");}
					 |  equality-expreesion NEQ_OP relational-expression        {printf("equality-expreesion -> equality-expression != relational-expression\n");}
					 ;

AND-expression  :  equality-expreesion                         {printf("AND-expression -> equality-expreesion\n");}
				|  AND-expression '&' equality-expreesion      {printf("AND-expression -> AND-expression & equality-expreesion\n");}
				;

exclusive-OR-expression  :  AND-expression                               {printf("exclusive-OR-expression -> AND-expression\n");}
						 |  exclusive-OR-expression '^' AND-expression   {printf("exclusive-OR-expression -> exclusive-OR-expression ^ AND-expression\n");}
						 ;

inclusive-OR-expression  :  exclusive-OR-expression                                {printf("inclusive-OR-expression -> exclusive-OR-expression\n");}
						 |  inclusive-OR-expression '|' exclusive-OR-expression    {printf("inclusive-OR-expression -> inclusive-OR-expression | exclusive-OR-expression\n");}
						 ;

logical-AND-expression  :  inclusive-OR-expression                                 {printf("logical-AND-expression -> inclusive-OR-expression\n");}
						|  logical-AND-expression AND_OP inclusive-OR-expression   {printf("logical-AND-expression -> logical-AND-expression && inclusive-OR-expression\n");}
						;

logical-OR-expression  :  logical-AND-expression                                 {printf("logical-OR-expression -> logical-AND-expression\n");}
					   |  logical-OR-expression OR_OP logical-AND-expression     {printf("logical-OR-expression -> logical-OR-expression || logical-AND-expression\n");}
					   ;

conditional-expression  :  logical-OR-expression                                              {printf("conditional-expression -> logical-OR-expression\n");}
						|  logical-OR-expression '?' expression ':' conditional-expression    {printf("conditional-expression -> logical-OR-expression ? expression : conditional-expression\n");}
						;

assignment-expression  :   conditional-expression                                        {printf("assignment-expression -> conditional-expression\n");}
					   |   unary-expression assignment-operator assignment-expression    {printf("unary-expression assignment-operator assignment-expression\n");}
					   ;

assignment-operator  :  '='            {printf("assignment-operator -> =\n");}
					 |  MULA_OP        {printf("assignment-operator -> *=\n");}
					 |  DIVA_OP        {printf("assignment-operator -> /=\n");}
					 |  REMA_OP        {printf("assignment-operator -> MOD=\n");}
					 |  ADDA_OP        {printf("assignment-operator -> +=\n");}
					 |  SUBA_OP        {printf("assignment-operator -> -=\n");}
					 |  LSA_OP         {printf("assignment-operator -> <<=\n");}
					 |  RSA_OP         {printf("assignment-operator -> >>=\n");}
					 |  ANDA_OP   	   {printf("assignment-operator -> &=\n");}
					 |  POWA_OP 	   {printf("assignment-operator -> ^=\n");}
					 |  ORA_OP     	   {printf("assignment-operator -> |=\n");}
					 ;

expression  :  assignment-expression                    {printf("expression -> assignment-expression\n");}
			|  expression ',' assignment-expression     {printf("expression -> expression, assignment-expression\n");}
			;


constant-expression  :  conditional-expression     {printf("constant-expression -> conditional-expression\n");}
					 ;

/*DECLARATIONS*/

declaration  :  declaration-specifiers init-declarator-list ';'  {printf("declaration -> declaration-specifiers init-declarator-list ;\n");}
			 |  declaration-specifiers ';'                        {printf("declaration -> declaration-specifiers ;\n");}
		     ;


declaration-specifiers  :  type-specifiers declaration-specifiers   {printf("declaration-specifiers -> type-specifiers declaration-specifiers\n");}
						|  type-specifiers                          {printf("declaration-specifiers -> type-specifiers\n");}
						;


init-declarator-list  :  init-declarator 							{printf("init-declarator-list -> init-declarator\n");}
					  |  init-declarator-list ',' init-declarator   {printf("init-declarator-list -> init-declarator-list, init-declarator\n");}
					  ;

init-declarator  :  declarator 									{printf("init-declarator -> declarator\n");}
     			 |  declarator '=' initializer 					{printf("init-declarator -> declarator = initializer\n");}
     			 ;

type-specifiers  :  VOID   	{printf("type-specifiers -> VOID\n");}
				 |  CHAR    {printf("type-specifiers -> CHAR\n");}
				 |  SHORT   {printf("type-specifiers -> SHORT\n");}
				 |  INT     {printf("type-specifiers -> INT\n");}
				 |  FLOAT   {printf("type-specifiers -> FLOAT\n");}
				 |  DOUBLE  {printf("type-specifiers -> DOUBLE\n");}
				 |  MATRIX  {printf("type-specifiers -> MATRIX\n");}
				 |  SIGNED  {printf("type-specifiers -> SIGNED\n");}
				 |  UNSIGNED {printf("type-specifiers -> UNSIGNED\n");}
				 |  BOOL    {printf("type-specifiers -> BOOL\n");}
				 ;

declarator  :  pointer direct-declarator    {printf("declarator -> pointer direct-declarator\n");}
			|  direct-declarator            {printf("declarator -> direct-declarator\n");}
			;

direct-declarator  :  IDENTIFIER                                         {printf("direct-declarator -> IDENTIFIER\n");}
				   |  '(' declarator ')' 								 {printf("direct-declarator -> (declarator)\n");}
				   |  direct-declarator '[' assignment-expression ']'    {printf("direct-declarator -> direct-declarator[assignment-expression]\n");}
				   |  direct-declarator '[' ']'                          {printf("direct-declarator -> direct-declarator[]\n");}
				   |  direct-declarator '(' parameter-type-list ')'      {printf("direct-declarator -> direct-declarator(parameter-type-list)\n");}
				   |  direct-declarator '(' identifier-list ')' 		 {printf("direct-declarator -> direct-declarator(identifier-list)\n");}
				   |  direct-declarator '(' ')'         				 {printf("direct-declarator -> direct-declarator()\n");}
				   ;




pointer  :  '*' pointer   {printf("pointer -> *pointer\n");}
		 |  '*' 		  {printf("pointer -> *\n");}
		 ;

parameter-type-list  :  parameter-list   {printf("parameter-type-list -> parameter-list\n");}
					 ;

parameter-list  :  parameter-declaration                           {printf("parameter-list -> parameter-declaration\n");}
				|  parameter-list ',' parameter-declaration		   {printf("parameter-list -> parameter-list, parameter-declaration\n");}
				;

parameter-declaration  :  declaration-specifiers declarator        {printf("parameter-declaration -> declaration-specifiers declarator\n");}
					   |  declaration-specifiers                   {printf("parameter-declaration -> declaration-specifiers\n");}
					   ;

identifier-list  :  IDENTIFIER 									 {printf("identifier-list -> IDENTIFIER\n");}
				 |  identifier-list ',' IDENTIFIER 				 {printf("identifier-list -> identifier-list, IDENTIFIER\n");}
				 ;

initializer  :  assignment-expression                            {printf("initializer -> assignment-expression\n");}
			 |  '{' initializer-row-list '}' 					 {printf("initializer -> { initializer-row-list }\n");}
			 ;

initializer-row-list  :  initializer-row 							{printf("initializer-row-list -> initializer-row\n");}
					  |  initializer-row-list ';' initializer-row   {printf("initializer-row-list -> initializer-row-list ; initializer-row\n");}
					  ;

initializer-row  :  designation initializer                        {printf("initializer-row -> designation initializer\n");}
				 |  initializer  								   {printf("initializer-row -> initializer\n");}
				 |  initializer-row ',' designation initializer    {printf("initializer-row -> initializer-row, designation initializer\n");}
				 |  initializer-row ',' initializer  			   {printf("initializer-row -> initializer-row, initializer\n");}
				 ; 


designation  :  designator-list '='  					{printf("designation -> designator-list =\n");}
			 ;

designator-list  :  designator 							{printf("designator-list -> designator\n");}
				 |  designator-list designator          {printf("designator-list -> designator-list designator\n");}
				 ;

designator  :  '[' constant-expression ']' 				{printf("designator -> [constant-expression]");}
    		|  '.' IDENTIFIER 							{printf("designator -> .IDENTIFIER");}
    		;

/*STATEMENT*/


statement  :  labeled-statement				{printf("statement -> labeled-statement\n");}
		   |  compound-statement 			{printf("statement -> compound-statement\n");}
		   |  expression-statement			{printf("statement -> expression-statement\n");}
		   |  selection-statement 			{printf("statement -> selection-statement\n");}
		   |  iteration-statement 			{printf("statement -> iteration-statement\n");}
		   |  jump-statement 				{printf("statement -> jump-statement\n");}
		   ;

expression-statement  :  expression ';'     {printf("expression-statement -> expression ;\n");}
					  |  ';'				{printf("expression-statement -> ;\n");}
					  ;


labeled-statement  :  IDENTIFIER ':' statement 						{printf("labeled-statement -> IDENTIFIER : statement\n");}
				   |  CASE constant-expression ':' statement 		{printf("labeled-statement -> CASE constant-expression : statement\n");}
				   |  DEFAULT ':' statement 						{printf("DEFAULT : statement\n");}
				   ;

compound-statement  :  '{' block-item-list '}'    {printf("compound-statement -> { block-item-list }\n");}
					|  '{' '}' 					  {printf("compound-statement -> {}");}
					;

block-item-list  :  block-item 					  {printf("block-item-list -> block-item\n");}
				 |  block-item-list block-item    {printf("block-item-list -> block-item-list block-item\n");}
				 ;

block-item  :  declaration 		{printf("block-item -> declaration\n");}
			|  statement 		{printf("block-item -> statement\n");}
			;


selection-statement  :  IF '(' expression ')' statement				%prec "then"       		{printf("selection-statement -> IF(expression) statement\n");}
					 |  IF '(' expression ')' statement ELSE statement     	 				{printf("selection-statement -> IF(expression) statement ELSE statement\n");}
					 |  SWITCH '(' expression ')' statement 				        		{printf("selection-statement -> SWITCH (expression) statement\n");}
					 ;

					

iteration-statement  :  WHILE '(' expression ')' statement                                              {printf("iteration-statement -> WHILE(expression) statement\n");}
					 |  DO statement WHILE '(' expression ')' 							  				{printf("iteration-statement -> DO statement WHILE (expression)\n");}
					 |  FOR '(' expression-statement expression-statement expression ')' statement    	{printf("iteration-statement -> FOR (expression-opt;expression-opt;expression) statement\n");}
					 |  FOR '(' expression-statement expression-statement ')' statement    	            {printf("iteration-statement -> FOR (expression-opt;expression-opt;) statement\n");}
					 |  FOR '(' declaration expression-statement expression ')' statement   			{printf("FOR (declaration expression-opt ; expression ) statement\n");}
					 |  FOR '(' declaration expression-statement ')' statement   			            {printf("FOR (declaration expression-opt ; ) statement\n");}
					 ;

jump-statement  :  GOTO IDENTIFIER ';' 			{printf("jump-statement -> GOTO IDENTIFIER; \n");}
				|  CONTINUE ';'				{printf("jump-statement -> CONTINUE;\n");}
				|  BREAK ';' 				{printf("jump-statement -> BREAK;\n");}
				|  RETURN expression ';'        {printf("jump-statement -> RETURN expression;\n");}
				|  RETURN ';' 				    {printf("jump-statement -> RETURN;\n");}
				;


translation-unit  :  external-declaration  						{printf("translation-unit -> external-declaration\n");}
				  |  translation-unit external-declaration 		{printf("translation-unit -> translation-unit external-declaration\n");}
				  ;

external-declaration  :  function-definition 		{printf("external-declaration -> function-definition\n");}
					  |  declaration 				{printf("external-declaration -> declaration\n");}
					  ;

function-definition  :  declaration-specifiers declarator declaration-list compound-statement 		{printf("function-definition -> declaration-specifiers declarator declaration-list compound-statement\n");}
					 |  declaration-specifiers declarator compound-statement 						{printf("function-definition -> declaration-specifiers declarator compound-statement\n");}
					 ;

					  ;

declaration-list  :  declaration 						{printf("declaration-list -> declaration\n");}
				  |  declaration-list declaration       {printf("declaration-list -> declaration-list declaration\n");}
				  ;



%%		


int yyerror(char *s){
  printf("Parser Error : %s\n",s);
  return -1;
}
