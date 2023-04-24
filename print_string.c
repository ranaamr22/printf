#include "main.h"

int print_string(va_list types)
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
