%{
   
   #include<math.h>
   #include<stdio.h>  
   #include "ass3_15CS10044.tab.h" 


%}



identifier-nondigit [_a-zA-Z]
digit [0-9]
identifier {identifier-nondigit}({identifier-nondigit}|{digit})* 

integer-constant [1-9]({digit})*
zero-constant 0
fractional-constant (({digit}+)?(\.{digit}+))|(({digit}+)(\.))
exponent-part [Ee][+\-]?{digit}+
floating-constant {fractional-constant}({exponent-part})?|({digit}+){exponent-part}

escape-sequence "\'"|"\""|"\?"|"\\"|"\a"|"\b"|"\f"|"\n"|"\r"|"\t"|"\v"
c-char [^'\\\n]|escape-sequence
c-char-sequence {c-char}+
character-constant "'"{c-char-sequence}"'"
single-line-comment "//".*
multi-line-comment  "/*"([^*]|(\*+[^*/]))*\*+\/ 


constant {integer-constant}|{zero-constant}|{floating-constant}|{character-constant}
integer {zero-constant}|{integer-constant}



s-char [^'\"\n]|escape-sequence
s-char-sequence {s-char}+
string-literal \"({s-char-sequence})?\"





%%



"unsigned"																{return UNSIGNED;}
"break"																	{return BREAK;}	
"return"																{return RETURN;}
"void"																	{return VOID;}
"case"																	{return CASE;}
"float"																	{return FLOAT;}
"short"																	{return SHORT;}
"char"																	{return CHAR;}
"for"																	{return FOR;}
"signed"																{return SIGNED;}
"while"																	{return WHILE;}
"goto"																	{return GOTO;}
"Bool"																	{return BOOL;}
"continue"																{return CONTINUE;}
"if"																	{return IF;}
"default"																{return DEFAULT;}
"do"																	{return DO;}
"int"																	{return INT;}
"switch"																{return SWITCH;}
"double"																{return DOUBLE;}
"long"																	{return LONG;}
"else"																	{return ELSE;}
"Matrix" 																{return MATRIX;}


{string-literal}                                                        {return STRING;}
{constant}																{return CONSTANT;}
{identifier-nondigit}({identifier-nondigit}|{digit})*                   {return IDENTIFIER;}
{multi-line-comment} 													{}
{single-line-comment}													{}



"[" |
"]" |
"(" |
")" |
"{" |
"}" |
"." |
"&" |
"*" |
"+" |
"-" |
"~" |
"!" |
"/" |
"%" |
"<" |
">" |
"^" |
"|" |
"?" |
":" |
";" |
"=" | 
"," |
"#"																		{return yytext[0];}


"->"																	{return PTR_OP;}																	
"++"																	{return INC_OP;}
"--"																	{return DEC_OP;}		
"<<"																	{return LSHIFT_OP;}
">>"																	{return RSHIFT_OP;}
"<="																	{return LEQ_OP;}				
">="																	{return GEQ_OP;}
"=="																	{return EQ_OP;}
"!="																	{return NEQ_OP;}
"&&"																	{return AND_OP;}
"||"																	{return OR_OP;}
"*="																	{return MULA_OP;}
"/="																	{return DIVA_OP;}
"%="																	{return REMA_OP;}
"+="																	{return ADDA_OP;}
"-="																	{return SUBA_OP;}
"<<="																	{return LSA_OP;}
">>="																	{return RSA_OP;}
"&="																	{return ANDA_OP;}
"^="																	{return POWA_OP;}
"|="																	{return ORA_OP;}	
".'"																	{return TRA_OP;}

<<EOF>>                                                                 {return 0;}
%%

