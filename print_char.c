#include "main2.h"

/**
 * printchar - prints a char
 *
 * @types: list of arguments to caller function
 *
 * Return: Always 0
 */

int printchar(va_list types)
{
	int c;

	c = va_arg(types, int);

	write(1, &c, 1);
	return (0);
}
