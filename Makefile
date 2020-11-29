all:
	gcc -g -O -c start.c
	gcc -g -O -c preprocessor.c
	gcc -o antigen start.o preprocessor.o
compile:
