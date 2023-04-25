#include "main2.h"

/**
 * printstring - print the strings
 *
 * @list: va_list type
 *
 * Return: length of the string
 */

int printstring(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char*);

	for (i = 0; i < length(str); i++)
	{
		write(1, &str[i], 1);
	}

	return (length(str));
}
