#include <stdio.h>

struct NormalStruct {
    char a;
    int b;
    double c;
};

#pragma pack(1)
struct PackedStruct1 {
    char a;
    int b;
    double c;
};

#pragma pack(2)
struct PackedStruct2 {
    char a;
    int b;
    double c;
};

#pragma pack(4)
struct PackedStruct4 {
    char a;
    int b;
    double c;
};

int main() {
    struct NormalStruct normal;
    struct PackedStruct1 packed1;
    struct PackedStruct2 packed2;
    struct PackedStruct4 packed4;

    printf("Normal struct:\n");
    printf("Size: %lu bytes\n", sizeof(normal));
    printf("Address of a: %p\n", (void *)&normal.a);
    printf("Address of b: %p\n", (void *)&normal.b);
    printf("Address of c: %p\n\n", (void *)&normal.c);

    printf("Packed struct (pack 1):\n");
    printf("Size: %lu bytes\n", sizeof(packed1));
    printf("Address of a: %p\n", (void *)&packed1.a);
    printf("Address of b: %p\n", (void *)&packed1.b);
    printf("Address of c: %p\n\n", (void *)&packed1.c);

    printf("Packed struct (pack 2):\n");
    printf("Size: %lu bytes\n", sizeof(packed2));
    printf("Address of a: %p\n", (void *)&packed2.a);
    printf("Address of b: %p\n", (void *)&packed2.b);
    printf("Address of c: %p\n\n", (void *)&packed2.c);

    printf("Packed struct (pack 4):\n");
    printf("Size: %lu bytes\n", sizeof(packed4));
    printf("Address of a: %p\n", (void *)&packed4.a);
    printf("Address of b: %p\n", (void *)&packed4.b);
    printf("Address of c: %p\n", (void *)&packed4.c);

    return 0;
}
