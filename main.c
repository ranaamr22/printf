#include "main2.h"

int main(void)
{

int len, len2;

len=printf("Hello, world!\n");
 len2 = _printf("Hello, world!\n");
printf("%d,%i\n", len,len2);
_printf("%d,%i\n", len,len2);

len=printf("The number is %d.\n", 42);
   len2=_printf("The number is %d.\n", 42);
printf("%d,%i\n", len,len2);
_printf("%d,%i\n", len,len2);

len=printf("The character is %c.\n", 'x');
  len2= _printf("The character is %c.\n", 'x');
printf("%d,%i\n", len,len2);
_printf("%d,%i\n", len,len2);

len=printf("The string is %s.\n", "Hello");
   len2=_printf("The string is %s.\n", "Hello");
printf("%d,%i\n", len,len2);
_printf("%d,%i\n", len,len2);
len=printf("The percentage is %%.\n");
   len2=_printf("The percentage is %%.\n");
printf("%d,%i\n", len,len2);
_printf("%d,%i\n", len,len2);
len=printf("The number is %i.\n", -123);
   len2=_printf("The number is %i.\n", -123);
printf("%d,%i\n", len,len2);
_printf("%d,%i\n", len,len2);
len=printf("The string is %s and the number is %d.\n", "Hello", 42);
   len2=_printf("The string is %s and the number is %d.\n", "Hello", 42);
printf("%d,%i\n", len,len2);
_printf("%d,%i\n", len,len2);
len=printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d.\n", 0, 1, 2, 3, 4, 5, 6, 7, 8, 9);
   len2=_printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d.\n", 0, 1, 2, 3, 4, 5, 6, 7, 8, 9);
printf("%d,%i\n", len,len2);
_printf("%d,%i\n", len,len2);
len=printf("%c%c%c%c%c.\n", 'H', 'e', 'l', 'l', 'o');
   len2=_printf("%c%c%c%c%c.\n", 'H', 'e', 'l', 'l', 'o');
printf("%d,%i\n", len,len2);
_printf("%d,%i\n", len,len2);
len=printf("The number is %i and %d.\n", 123, 456);
   len2=_printf("The number is %i and %d.\n", 123, 456);
printf("%d,%i\n", len,len2);
_printf("%d,%i\n", len,len2);
len=printf("The number is %i and the character is %c.\n", 123, 'A');
    len2=_printf("The number is %i and the character is %c.\n", 123, 'A');
printf("%d,%i\n", len,len2);
_printf("%d,%i\n", len,len2);
len=printf("The string is %s and the character is %c.\n", "Hello", 'A');
    len2=_printf("The string is %s and the character is %c.\n", "Hello", 'A');
printf("%d,%i\n", len,len2);
_printf("%d,%i\n", len,len2);
len=printf("The number is %d and the percentage is %%.\n", 42);
 len2=_printf("The number is %d and the percentage is %%.\n", 42);
printf("%d,%i\n", len,len2);
_printf("%d,%i\n", len,len2);
len= printf("The string is %s, the number is %d, and the character is %c.\n", "Hello", 42, 'A');
    len2=_printf("The string is %s, the number is %d, and the character is %c.\n", "Hello", 42, 'A');
printf("%d,%i\n", len,len2);
_printf("%d,%i\n", len,len2);


len= -7887;
len2= -1348272;
printf("%d,%i\n", len,len2);
_printf("%d,%i\n", len,len2);

return (0);

}
