#include "main.h"

int print_char(va_list types)
{
	int c;

	c =va_arg(types, int);

	write(1, &c, 1);
	return (0);
}
