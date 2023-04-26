#include "main2.h"

/**
 * printint_d - prints an int
 *
 * @list va_list variable
 *
 * Return: number of digits printed
 */

int printint_d(int n)
{
	int tmp;
	char *str;
	int digits_num = 0, i = 0;
	
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		digits_num++;
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
	free(str);
	return (digits_num);
}

/**
 * print_binary - prints an unsigned binary number
 *
 * @list: list of arguments to printf
 *
 * Return: number of digits printed
 */

unsigned int printbinary(va_list list)
{
	int i, j;
	int *num_arr;
	int digits_num;
	int n;

	n = va_arg(list, int);

	num_arr = malloc(sizeof(int) * 32);
	for (i = 0 ; n !=0 ; i++)
	{
		num_arr[i] = n % 2;
		n /= 2;
	}

	digits_num = i;

	for (j = i - 1; j >= 0; j--)
	{
		printint_d(num_arr[j]);
	}
	free(num_arr);
	return (digits_num);
}
