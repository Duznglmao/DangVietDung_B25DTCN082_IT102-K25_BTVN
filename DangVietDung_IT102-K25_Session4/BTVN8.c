#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap do dai canh a: ");
    scanf("%d", &a);
    printf("Nhap do dai canh b: ");
    scanf("%d", &b);
    printf("Nhap do dai canh c: ");
    scanf("%d", &c);

    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
        printf("La 3 canh tam giac\n");
    } else {
        printf("Khong phai 3 canh tam giac\n");
    }

    return 0;
}
