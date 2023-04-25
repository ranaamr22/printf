#include "main2.h"

/**
 * printchar - prints a char
 *
 * @list: list of arguments to caller function
 *
 * Return: Always 0
 */

int printchar(va_list list)
{
	int c;

	c = va_arg(list, int);

	write(1, &c, 1);
	return (0);
}
