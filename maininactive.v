#include <limits.h>
#include <stdio.h>
#include "main2.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Zero:[%d, %i]\n\n", 0, 0);

    _printf("Length:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n\n", len, len2);

    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n\n", -762534);

    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n\n", ui);

    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n\n", ui);

    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n\n", ui, ui);

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n\n", 'H');

    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n\n", "I am a string !");

    _printf("String1:[%s], String2:[%s]\n", "I am a string !", "hello");
    printf("String1:[%s], String2:[%s]\n\n", "I am a string !", "hello");

    _printf("String:[%s], Char:[%c]\n", "I am a string !", 'N');
    printf("String:[%s], Char:[%c]\n\n", "I am a string !", 'N');

    _printf("String:[%s], Char:[%c], Int: [%d]\n", "I am a string !", 'N', 344);
    printf("String:[%s], Char:[%c], Int: [%d]\n\n", "I am a string !", 'N', 344);

    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n\n", addr);

    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n\n", len2);

    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
