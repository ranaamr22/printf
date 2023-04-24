#include "main2.h"

/**
 * _printf - prints anything
 *
 * @format: string to print, including 0 or more specifiers
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, counter = 0, len;
	va_list list;
	char *str;

	len = length((char *)format);

	for (i = 0 ; i < len ; i++)
	{
		if (format[i] == '%')
		{
			va_start(list, format);
			switch (format[++i])
			{
				case 'c':
				printchar(list);
				counter++;
				break;

				case 's':
				str = va_arg(list, char *);
				printstring(str);
				counter += length(str);
				break;

				case '%':
				write(1, "%", 1);
				counter++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			counter++;
		}
	}
	va_end(list);
	return (counter);
}
