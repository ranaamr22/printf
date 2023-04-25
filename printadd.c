#include "main2.h"

/**
 * printadd - prints the address of the argument
 * @list: list of the arguments passed
 * Return: length of digits printed
 */
int printadd(va_list list)
{
	unsigned long int a;
	void *add;
	int size;

	add = va_arg(list, void*);
	a = (unsigned long int)add;
	size = printhex(a);
	return (size);
}
