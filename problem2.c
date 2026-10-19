
#include <stdio.h>

struct Original {
    char a;
    int b;
    double c;
};

struct Reordered {
    double c;
    int b;
    char a;
};

int main() {
    struct Original first;
    struct Reordered second;

    printf("Original struct:\n");
    printf("Size of struct: %zu bytes\n", sizeof(first));
    printf("Address of a: %p\n", (void *)&first.a);
    printf("Address of b: %p\n", (void *)&first.b);
    printf("Address of c: %p\n", (void *)&first.c);

    printf("\nReordered struct:\n");
    printf("Size of struct: %zu bytes\n", sizeof(second));
    printf("Address of c: %p\n", (void *)&second.c);
    printf("Address of b: %p\n", (void *)&second.b);
    printf("Address of a: %p\n", (void *)&second.a);

    return 0;
}

