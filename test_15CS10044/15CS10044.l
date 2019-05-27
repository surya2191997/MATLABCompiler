%{
   
   #include<math.h>


%}


keyword "break"|"return"|"case"|"float"|"for"|"while"|"continue"|"if"|"default"|"int"|"switch"|"Matrix" 
identifier-nondigit [_a-zA-Z]
digit [0-9]
identifier {identifier-nondigit}({identifier-nondigit}|{digit})* 

integer-constant [1-9]({digit})*
zero-constant 0
fractional-constant (({digit}+)?(\.{digit}+))|(({digit}+)(\.))
exponent-part [Ee][+\-]?{digit}+
floating-constant {fractional-constant}({exponent-part})?

constant {integer-constant}|{zero-constant}|{floating-constant}


integer {zero-constant}|{integer-constant}


s-char [^'\\\n]
s-char-sequence {s-char}+
string-literal \"({s-char-sequence})?\"

punctuator "["|"]"|"("|")"|"{"|"}"|"."|"++"|"--"|"*"|"+"|"-"|"/"|"!"|"<"|">"|"&&"|"||"|"?"|":"|";"|"="|","|"#"
forloop1 "for("{identifier}"="{integer}";"{identifier}"<"{integer}";"{identifier}"++)"
forloop2 "for("{identifier}"="{integer}","{identifier}"="{integer}";"{identifier}"<"{integer}";"{identifier}"++,"{identifier}"--)"
whileloop "while("{identifier}"<"{integer}")"
declaration {identifier}"="{integer}(","{identifier}={integer})*
arrayaccess {identifier}"["{identifier}"]"
ifcondition "if("{identifier}"<"{integer}"&&"{identifier}"<"{integer}")"
unaryoperator ({identifier}"++")|"++"{identifier}
switch "switch("{identifier}")"
triple "0,0,0"
matrix "["{triple}*(";"{triple})*"]"
binaryoperator {identifier}"="{identifier}"+"{integer}



%%
{forloop1}																	 {printf("<FOR_LOOP_1> "); }
{forloop2}																	 {printf("<FOR_LOOP_2> "); }
{whileloop}                                                                  {printf("<WHILE_LOOP> "); }
{declaration}																 {printf("<DECLRATION> "); }
{arrayaccess}																 {printf("<ARRAY_ACCESS> ");}
{ifcondition}																 {printf("<IF_CONDITION> ");}
{unaryoperator}																 {printf("<UNARY_OP> ");}
{switch}																     {printf("<SWITCH> ");}
{matrix}																	 {printf("<MATRIX> ");}
{binaryoperator}                                                             {printf("<BINARY_OP> ");}
{constant}																	 {printf("<CONSTANT> ");}
{keyword}   																 {printf("<KEYWORD> ");}
{identifier-nondigit}({identifier-nondigit}|{digit})*                        {printf("<IDENTIFIER> ");}
{punctuator}                                                                 {printf("<PUNCTUATOR> ");} 
{string-literal}                                                             {printf("<STRING> ");}
<<EOF>>                                                                      {return 0;}



%%

main( argc, argv )
int argc;
char **argv;
{
++argv, --argc; /* skip over program name */
if ( argc > 0 )
yyin = fopen( argv[0], "r" );
else
yyin = stdin;
yylex();
}
