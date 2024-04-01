default:
	gcc main.c -o main.out
run:
	gcc main.c -o main.out
	./main.out
perf:
	gcc main.c -o small.out -Oz
	gcc main.c -o fast.out -Ofast
wall:
	gcc main.c -o main.out -Wall
all:
	gcc -c *