#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
#姓名 版本 联系方式
AC_INIT([GaiFW_TEST], [0.1.0], [1114594939@qq.com])
#源文件所在路径文件名
AC_CONFIG_SRCDIR([src/main.c])
AC_CONFIG_HEADERS([config.h])
#添加automake的初始化选项
AM_INIT_AUTOMAKE([foreign -Wall -Werror])


# Checks for programs.探测当前系统的C编译器
AC_PROG_CC
AC_PROG_CC_C_O

# Checks for libraries.
# FIXME: Replace `main' with a function in `-lfunc':
AC_CHECK_LIB([func], [main])

#由于我们用到静态库，因此需要声明以下宏
AM_PROG_AR
AC_PROG_RANLIB

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h string.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_CHECK_FUNCS([memset])

AC_CONFIG_FILES([Makefile
                 lib/Makefile
                 src/Makefile])
AC_OUTPUT
