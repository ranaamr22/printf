#include "main1.h"

/**
 * _printf - prints anything
 *
 * @format: string to print, including 0 or more specifiers
 *
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	int i = 0, len;
	va_list list;

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
				break;

				case 's':
				printstring(list);
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
