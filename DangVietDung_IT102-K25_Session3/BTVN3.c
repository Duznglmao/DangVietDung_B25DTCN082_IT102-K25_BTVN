#include <stdio.h>
#include <math.h>

int main() {
    double r, Chuvi, Dientich;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%lf", &r);

    Chuvi = 2 * M_PI * r;
    Dientich = M_PI * pow(r, 2);
    printf("Chu vi hinh tron = %.2lf\n", Chuvi);
    printf("Dien tich hinh tron = %.2lf\n", Dientich);

    return 0;
}

