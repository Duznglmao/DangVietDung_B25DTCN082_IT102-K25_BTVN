#include <stdio.h>

int main () {
    float c, f;
    printf("Nhap nhiet do Celsius: ");
    scanf("%f",&c);

    f = c * (float)9 / 5 + 32;
    printf("Nhiet do Fahrenheit la: %.2f", f);

    return 0;
}