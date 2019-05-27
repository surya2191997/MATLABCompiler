all: a.out

a.out: lex.yy.o ass5_15CS10044.tab.o ass5_15CS10044_translator.o  ass5_15CS10044_target_translator.o 
	g++ lex.yy.o ass5_15CS10044.tab.o ass5_15CS10044_translator.o ass5_15CS10044_target_translator.o -lfl


ass5_15CS10044.tab.o:	ass5_15CS10044.tab.c
	g++ -c  ass5_15CS10044.tab.c

lex.yy.o:	lex.yy.c
	g++ -c  lex.yy.c

lex.yy.c:	ass5_15CS10044.l ass5_15CS10044.tab.c
	flex ass5_15CS10044.l

ass5_15CS10044.tab.c:	ass5_15CS10044.y 
	bison -dtv ass5_15CS10044.y


myl.o: myl.c myl.h
	gcc -Wall -c myl.c


ass5_15CS10044_translator.o: ass5_15CS10044_translator.h ass5_15CS10044_translator.cxx
	g++ -c  ass5_15CS10044_translator.cxx

ass5_15CS10044_target_translator.o: ass5_15CS10044_target_translator.cxx
	g++ -c  ass5_15CS10044_target_translator.cxx


run1: a.out ass5_15CS10044_test1.mm 
	./a.out < ass5_15CS10044_test1.mm  > ass5_15CS10044_quads1.out
	 
run2: a.out ass5_15CS10044_test1.mm 
	./a.out < ass5_15CS10044_test2.mm  > ass5_15CS10044_quads2.out
	
run3: a.out ass5_15CS10044_test1.mm 
	./a.out < ass5_15CS10044_test3.mm  > ass5_15CS10044_quads3.out

run4: a.out ass5_15CS10044_test1.mm 
	./a.out < ass5_15CS10044_test4.mm  > ass5_15CS10044_quads4.out
	
run5: a.out ass5_15CS10044_test1.mm 
	./a.out < ass5_15CS10044_test5.mm  > ass5_15CS10044_quads5.out
	


arun1: a.out ass5_15CS10044_test1.mm 
	./a.out < ass5_15CS10044_test1.mm  > ass5_15CS100441.s
	 gcc ass5_15CS100441.s myl.c -o 1.out

arun2: a.out ass5_15CS10044_test1.mm 
	./a.out < ass5_15CS10044_test2.mm  > ass5_15CS100442.s
	 gcc ass5_15CS100442.s myl.c -o 2.out

arun3: a.out ass5_15CS10044_test1.mm 
	./a.out < ass5_15CS10044_test3.mm  > ass5_15CS100443.s
	 gcc ass5_15CS100443.s myl.c -o 3.out

arun4: a.out ass5_15CS10044_test1.mm 
	./a.out < ass5_15CS10044_test4.mm  > ass5_15CS100444.s
	 gcc ass5_15CS100444.s myl.c -o 4.out

arun5: a.out ass5_15CS10044_test1.mm 
	./a.out < ass5_15CS10044_test5.mm  > ass5_15CS100445.s
	 gcc ass5_15CS100445.s myl.c -o 5.out
	

clean:
	rm a.out ass5_15CS10044.tab.o lex.yy.o lex.yy.c ass5_15CS10044.tab.c ass5_15CS10044.tab.h ass5_15CS10044.output ass5_15CS10044_translator.o ass5_15CS10044_target_translator.o
