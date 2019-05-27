a.out: main_func.o lib.a
	gcc main_func.o ass2_15CS10044.c
main_function.o: main_func.c myl.h
	gcc -Wall -c main_func.c
lib.a: ass2_15CS10044.o
	ar -rcs lib.a ass2_15CS10044.o
ass2_15CS10059.o: ass2_15CS10044.c myl.h
	gcc -Wall -c ass2_15CS10044.c
clean:
	rm a.out main.o lib.a ass2_15CS10044.o
