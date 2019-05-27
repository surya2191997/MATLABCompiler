#include <stdio.h>

extern int yylex();
extern char* yytext;

main()
{

	//yyin = stdin;
	int a =yylex();
	
	while(a!=0)
	{
	
	switch(a)
	{

	case 258:
	printf("CONSTANT ");
	break;
    
	case 259:
    printf("IDENTIFIER ");
    break;
    
    case 260:
    printf("STRING-LITERAL ");
    break;
    
    case 261:
    //break;
    //printf("UNSIGNED ");
    //
    case 262:
    //printf("BREAK ");
    //break;
    //
    case 263:
    //printf("RETURN ");
    //break;
    //
    case 264:
    //printf("VOID ");
    //break;
    //
    case 265:
    //printf("CASE ");
    //break;
    //
    case 266:
    //printf("FLOAT ");
    //break;
    //
    case 267:
    //printf("SHORT ");
    //break;
    //
    case 268:
    //printf("CHAR ");
    //break;
    //
    case 269:
    //printf("FOR ");
    //break;
    //
    case 270:
    //printf("SIGNED ");
    //break;
    //
    case 271:
    //printf("WHILE ");
    //break;
    //
    case 272:
    //printf("GOTO ");
    //break;
    //
    case 273:
    //printf("BOOL ");
    //break;
    //
    case 274:
    //printf("CONTINUE ");
    //break;
    //
    case 275:
    //printf("IF ");
    //break;
    //
    case 276:
    //printf("DEFAULT ");
    //break;
    //
    case 277:
    //printf("DO ");
    //break;
    //
    case 278:
    //printf("INT ");
    //break;
    //
    case 279:
    //printf("SWITCH ");
    //break;
    //
    case 280:
    //printf("DOUBLE ");
    //break;
    //
    case 281:
    //printf("LONG ");
    //break;
    //
    case 282:
    //printf("ELSE ");
    //break;
    //
    case 283:
    printf("KEYWORD ");                              
    break;
    
    case 284:
    //printf("PTR_OP ");
    //break;
    
    case 285:
    //printf("INC_OP ");
    //break;
    
    case 286:
    //printf("DEC_OP ");
    //break;
    
    case 287:
    //printf("LSHIFT_OP ");
    //break;
    
    case 288:
    //printf("RSHIFT_OP ");
    //break;
    
    case 289:
    //printf("LEQ_OP ");
    //break;
    
    case 290:
    //printf("GEQ_OP ");
    //break;
    
    case 291:
    //printf("EQ_OP ");
    //break;
    
    case 292:
    //printf("NEQ_OP ");
    //break;
    
    case 293:
    //printf("AND_OP ");
    //break;
    
    case 294:
    //printf("OR_OP ");
    //break;
    
    case 295:
    //printf("MULA_OP ");
    //break;
    
    case 296:
    //printf("DIVA_OP ");
    //break;
    
    case 297:
    //printf("REMA_OP ");
    //break;
   
    case 298:
    //printf("ADDA_OP ");
    //break;
    
    case 299:
    //printf("SUBA_OP ");
    //break;
    
    case 300:
    //printf("LSA_OP ");
    //break;
    	
    case 301:	
    //printf("RSA_OP ");
    //break;
    //
    case 302:
    //printf("ANDA_OP ");
    //break;

    case 303:
    //printf("POWA_OP ");
    //break;
    
    case 304:
    //printf("ORA_OP ");
    //break;
    
// ASCII values for PUNCTUATORS WITH SINGLE CHARACTER 
case 33:
case 34:
case 35:
case 36:
case 37:
case 38:
case 39:
case 40:
case 41:
case 42:
case 43:
case 44:
case 45:
case 46:
case 47:
case 58:
case 59:
case 60:
case 61:
case 62:
case 63:
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
case 123:
case 124:
case 125:
case 126:
case 127:

    case 305:
    printf("PUNCTUATOR ");                                 // TRA_OP
    break;
	
    default:                                               // default error
    printf("Error !");
    break;

	}	

	a = yylex();
	}

	printf("\n **************************** LEXICAL ANALYSIS OVER ****************************\n");
}
