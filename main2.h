#ifndef MAIN2_H
#define MAIN2_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int length(char *str);
int printchar(va_list types);
int printstring(char *str);
int printint_d(va_list type);

#endif
