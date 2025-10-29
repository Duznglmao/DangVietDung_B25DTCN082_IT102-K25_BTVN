#include <stdio.h>

int main() {
    int a, b, tempA, tempB, ucln, bcnn;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong!\n");
        return 1;
    }
    
    tempA = a;
    tempB = b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    ucln = a;
    bcnn = (tempA * tempB) / ucln;

    printf("Boi chung nho nhat la: %d\n", bcnn);

    return 0;
}
