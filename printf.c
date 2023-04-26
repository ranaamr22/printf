#include "main2.h"

/**
 * _printf - prints everything
 *
 * @format: string to be  printed, including 0 or  specifiers
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, counter = 0, len, n1;
	va_list list;
	va_start(list, format);

	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	if (format [0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	len = length((char *)format);
	for (i = 0 ; i < len ; i++)
	{
		if (format[i] == '%')
		{
			switch (format[++i])
			{
				case 'c':
				printchar(list);
				counter++;
				break;

				case 's':
				n1 = printstring(list);
				counter += n1;
				break;

				case 'i':
				case 'd':
				n1 = printint_d(list);
				counter += n1;
				break;

				case '%':
				write(1, "%", 1);
				counter++;
				break;

				case 'p':
				n1=printadd(list);
				counter += n1;
				break;

				case 'u':
				n1 = printuint(list);
                                counter += n1;
                                break;

				case 'X':
				n1=printadd(list);
                                counter += n1;

				default:
				write(1, &format[--i], 1);
				write(1, &format[++i], 1);
				counter += 2;
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
