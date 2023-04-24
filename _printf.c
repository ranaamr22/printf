#include "main.h"

int _printf(const char *format, ...)
{
	int i = 0, len;
	va_list list, copy;
	char *str, *buffer;

	len = length((char *)format);

	buffer = malloc(sizeof(char) * len);

	for (i = 0 ; i < len ; i++)
	{
		if (format[i] == '%')
		{
			va_start(list, format);
			switch (format[++i])
			{
				case 'c':
				va_arg(copy, int);
				print_char(list, buffer, 0, 0, 0, sizeof(char));
				break;

				case 's':
				str = va_arg(copy, char*);
				print_string(list, buffer, 0, 0, 0, sizeof(str));
				break;
				
				case '%':
				write(1, "%", 1);
			}
		}
		else
			write(1, &format[i], 1);
	}
	return (0);
}
