#include "main2.h"

/**
 * length - get the length of strings
 * @str: pointer to string of characters
 * Return: len (success)
 */

int length(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i])
	{
		len++;
		i++;
	}

	return (len);
}
