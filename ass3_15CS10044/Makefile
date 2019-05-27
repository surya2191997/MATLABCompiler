a.out :					lexer parser

parser:					lex.yy.c ass3_15CS10044.tab.c ass3_15CS10044_parser.c
						@cc -o parser ass3_15CS10044.tab.c ass3_15CS10044_parser.c lex.yy.c -lfl 

lexer: 					lex.yy.c ass3_15CS10044.tab.c ass3_15CS10044_lexer.c
						@cc -o lexer lex.yy.c ass3_15CS10044.tab.c ass3_15CS10044_lexer.c -lfl

ass3_15CS10044.tab.c: 	ass3_15CS10044.y
						@bison -d ass3_15CS10044.y

lex.yy.c: 				ass3_15CS10044.l
						@flex ass3_15CS10044.l

clean:		
						@rm -f -- a.out lex.yy.c lexer parser *.o *.dot *.tab.* *.output

reset_output_files:
						@rm -f -- ass3_test_*_*_15CS10044


