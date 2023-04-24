#include "main2.h"

/**
 * printint_d - prints an int
 *
 * @type: va_list variable
 *
 * Return: Always 0
 */

int printint_d(va_list type)
{
	int x;
	char digit;

	x = va_arg(type, int);

	while(x > 0)
	{
		digit = (x % 10) + '0';
		x /= 10;
		write(1, &digit, 1);
	}
	return (0);
}
