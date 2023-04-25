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
	int n;
	int tmp;
	char *str;
	int digits_num = 0, i = 0;

	n = va_arg(type, int);
	
	if (n == 0)
	{
		write(1, "0", 1);
		return (0);
	}

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}

	while (tmp > 0)
	{
		digits_num++;
		tmp /= 10;
	}
	str = malloc((sizeof(char) * digits_num) + 1);

	while (n > 0)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}

	while (i > 0)
	{
		write(1, &str[--i], 1);
	}

	return (0);
}
