#include "main2.h"

int main() {
    int i1 = 123;
    int i2 = -456;
    int i3 = 0;

    printf("Positive integer: %d\n", i1);
    _printf("Positive integer: %d\n", i1);

    printf("Negative integer: %i\n", i2);
    _printf("Negative integer: %i\n", i2);

    printf("Zero integer: %d\n", i3);

    printf("Positive integer with leading zeros: %d\n", 00123);
    printf("Negative integer with leading zeros: %i\n", -000456);

    printf("Positive integer with spaces before it: %d\n", i1);
    printf("Negative integer with spaces before it: %i\n", i2);

    printf("Hexadecimal number: %d\n", 0xABC);
    printf("Octal number: %i\n", 0123);

    return 0;
}
