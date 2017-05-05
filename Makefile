
all: bin/deposit-calc

build/main.o: src/main.c
	gcc -Wall -Werror -o build/main.o -c src/main.c

build/deposit.o: src/deposit.c
	gcc -Wall -Werror -o build/deposit.o -c src/deposit.c

bin/deposit-calc: build/main.o build/deposit.o src/deposit.h
	gcc -Wall -Werror -o bin/deposit-calc build/main.o build/deposit.o