./bin/main:./lib/main.o ./lib/libfunc.a
	gcc ./lib/main.o -o ./bin/main -I ./inc -L ./lib -lfunc

obj = ./lib/a.o ./lib/b.o

./lib/libfunc.a:$(obj)
	ar cr ./lib/libfunc.a $(obj)

$(obj):%.o:%.c
	gcc $^ -o $@ -I ./inc -c

./lib/main.o:./src/main.c
	gcc $^ -o $@ -I ./inc -c

	
clean
	rm ./lib/*.o -f
