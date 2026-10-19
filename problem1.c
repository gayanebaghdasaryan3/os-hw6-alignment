
#include <stdio.h>

int main() {
    int a = 42;
    char b = 'G';
    double c = 3.14;
    short d = 3;

    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Address of int: %p\n", (void *)&a);

    printf("Size of char: %zu byte\n", sizeof(b));
    printf("Address of char: %p\n", (void *)&b);

    printf("Size of double: %zu bytes\n", sizeof(c));
    printf("Address of double: %p\n", (void *)&c);

    printf("Size of short: %zu bytes\n", sizeof(d));
    printf("Address of short: %p\n", (void *)&d);

    return 0;
}

