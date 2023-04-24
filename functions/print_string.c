#include "main.h"

int print_string(va_list types, char buffer[], int flags, int width, int precision, int size)
{
	char *str;
	int i;
	int n;

	str = va_arg(types, char*);

	for (i = 0; i < length(str); i++)
	{
		n = write(1, str[i], 1);
		write(buffer, n);
	}
}
