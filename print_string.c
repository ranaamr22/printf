#include "main2.h"

/**
 * printstring - print the strings
 * @types: string to be printed
 * Return: (0) (success)
 */

int printstring(char *str)
{
	int i;

	for (i = 0; i < length(str); i++)
	{
		write(1, &str[i], 1);
	}

	return (0);
}
