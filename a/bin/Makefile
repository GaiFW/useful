
OBJ=../lib/che.c ../lib/heap.c ../lib/sort.c ../lib/ticket.c ../lib/user.c

$(OBJ):%.o:%.c
	$(cc) $^ -o $@ -c
	ar cr ../lib/libfunc.a ../lib/*.o


m:../src/main.c 
	gcc $< -o $@ -I ../src/main.h -L ../lib/ -l../lib/func

.PHONY:clean cleanall
clean:
	rm ../lib/*.o
cleanall:
	rm ../lib*.o
