all: a.out

a.out: lex.yy.o ass4_15CS10044.tab.o ass4_15CS10044_translator.o 
	g++  lex.yy.o ass4_15CS10044.tab.o ass4_15CS10044_translator.o -lfl


ass4_15CS10044.tab.o:	ass4_15CS10044.tab.c
	g++ -c  ass4_15CS10044.tab.c

lex.yy.o:	lex.yy.c
	g++ -c  lex.yy.c

lex.yy.c:	ass4_15CS10044.l ass4_15CS10044.tab.c
	flex ass4_15CS10044.l

ass4_15CS10044.tab.c:	ass4_15CS10044.y 
	bison -dtv ass4_15CS10044.y

ass4_15CS10044_translator.o: ass4_15CS10044_translator.h ass4_15CS10044_translator.cxx
	g++ -c  ass4_15CS10044_translator.cxx

clean:
	rm a.out ass4_15CS10044.tab.o lex.yy.o lex.yy.c ass4_15CS10044.tab.c ass4_15CS10044.tab.h ass4_15CS10044.output ass4_15CS10044_translator.o
