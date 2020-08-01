L = ./lib/
S = ./src/
I = ./inc/

obj = $(L)func1.o $(L)func2.o

./bin/main:$(S)main.c $(L)libfunc.a
	$(CC) $< -o $@ -I$(I) -L$(L) -lfunc

$(L)libfunc.a:$(obj)
	ar cr $@ $^

$(obj):%.o:%.c
	$(CC) $^ -o $@ -c -I$(I)
clean:
	rm $(L)*.o -f
