#include <stdio.h>

int main() {
    short a = 10;                     // short: so nguyen nho, 2 byte
    int b = 100;                      // int: so nguyen, 4 byte
    long c = 1000;                    // long: so nguyen lon, 4 hoac 8 byte
    long long d = 10000;              // long long: so nguyen rat lon, 8 byte
    unsigned short e = 20;           // unsigned short: so nguyen duong nho, 2 byte
    unsigned int f = 200;             // unsigned int: so nguyen duong, 4 byte
    unsigned long g = 2000;            // unsigned long: so nguyen duong lon, 4 hoac 8 byte
    unsigned long long h = 20000;       // unsigned long long: so nguyen duong rat lon, 8 byte
    char i = 'D';                     // char: ky tu, 1 byte

    printf("a = %hd\n", a);
    printf("b = %d\n", b);
    printf("c = %ld\n", c);
    printf("d = %lld\n", d);
    printf("e = %hu\n", e);
    printf("f = %u\n", f);
    printf("g = %lu\n", g);
    printf("h = %llu\n", h);
    printf("i = %c\n", i);

    return 0;
}
