#include <stdio.h>

int main () {
    float a, b, solution;

    printf("Nhap so a: ");
    scanf("%f", &a);

    printf("Nhap so b: ");
    scanf("%f", &b);

    if (a == 0 && b == 0) {
        printf("Phuong trinh co vo so nghiem\n");
    }
    else if (a == 0 && b != 0) {
        printf("Phuong trinh vo nghiem\n");
    }
    else if (a != 0) {
        solution = -b / a;
        printf("Phuong trinh co nghiem x = %.0f\n", solution);
    }

    return 0;
}