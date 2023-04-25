#include "main2.h"

/**
 * printint_d - prints an int
 *
 * @list va_list variable
 *
 * Return: number of digits printed
 */

int printint_d(va_list list)
{
	int n;
	int tmp;
	char *str;
	int digits_num = 0, i = 0;

	n = va_arg(list, int);
	
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
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

	return (digits_num);
}
