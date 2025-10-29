#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap 3 so nguyen a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    
    if (a > c) {
        a = a + c;
        c = a - c;
        a = a - c;
    }

    if (b > c) {
        b = b + c;
        c = b - c;
        b = b - c;
    }

    printf("Thu tu tang dan: %d %d %d\n", a, b, c);
    
    return 0;
}
