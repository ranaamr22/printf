#ifndef MAIN2_H
#define MAIN2_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

int _printf(const char *format, ...);
int length(char *str);
int printchar(va_list list);
int printstring(va_list list);
int printint_d(va_list list);
int printadd(va_list list);
int printhex(unsigned long int num);
int printuint(va_list list);

#endif
