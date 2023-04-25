#include "main2.h"

/**
 * printhex - converts unsigned int into hexadecimal
 * @num: unsigned int number
 * Return: number of hexadecimal digits
 */
int printhex(unsigned long int num)
{
	long int i;
	long int count = 0;
	long int *array;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	array = malloc(sizeof(long int) * count);
	for (i = 0; i < count; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	write(1, "0x", 2);
	for (i = count - 1; i >= 0; i--)
	{
		char c;

		if (array[i] >= 10)
			c = 'a' + array[i] - 10;
		else
			c = '0' + array[i];
		write(1, &c, 1);
	}
	return (count + 2);
}
