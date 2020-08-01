#要把以后的可执行文件放在/usr/local/bin下
bin_PROGRAMS = main
#main 依赖的文件列表
main_SOURCES = main.c mian.h

#指定预编译选项,头文件路径
main_CPPFLAGS = -I../inc

#指定的链接库
main_LDADD = ../lib/libfunc.a

#链接器选项，库路径和库名
main_LDFLAGS = -L../lib -lfunc
