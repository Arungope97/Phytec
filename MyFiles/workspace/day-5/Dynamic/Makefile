arit:arith.c add.o sub.o mul.o div.o app.h
	gcc arith.c add.c sub.c mul.c div.c -o arit
add.o:add.c
	gcc -c add.c -o add.o
sub.o:sub.c
	gcc -c sub.c -o sub.o	

mul.o:mul.c
	gcc -c mul.c -o mul.o

div.o:div.c
	gcc -c div.c -o div.o

clean:
	rm *.o

