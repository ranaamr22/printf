#include "main1.h"

/**
 * printstring - print the strings
 * @types: take an argument of type va_list
 * Return: (0) (success)
 */

int printstring(va_list types)
{
	char *str;
	int i;

	str = va_arg(types, char*);

	for (i = 0; i < length(str); i++)
	{
		write(1, &str[i], 1);
	}

	return (0);
}
