#include <stdio.h>

int main() {
    int n;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n phai la so nguyen duong!\n");
        return 0;
    }

    printf("Cac cap (a, b) thoa man a^3 + b^3 = %d la:\n", n);

    int dem = 0;

    for (int a = 0; a * a * a <= n; a++) {
        for (int b = 0; b * b * b <= n; b++) {
            if (a * a * a + b * b * b == n) {
                printf("(%d, %d)\n", a, b);
                dem++;
            }
        }
    }

    if (dem == 0)
        printf("Khong co cap (a, b) nao phu hop.\n");

    return 0;
}
