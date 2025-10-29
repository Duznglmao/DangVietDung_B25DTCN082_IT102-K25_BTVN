#include <stdio.h>

int main () {
    float a, h, dientich;
    printf("Nhap do dai canh day tam giac: ");
    scanf("%f", &a);

    printf("Nhap chieu cao tam giac:");
    scanf("%f",&h);

    dientich = (1.0 / 2.0) * a * h;
    printf("Dien tich tam giac la: %.2f", dientich);

    return 0;
}