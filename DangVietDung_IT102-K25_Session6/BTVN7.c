#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong!\n");
        return 1;
    }

    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    printf("Uoc chung lon nhat la: %d\n", a);

    return 0;
}
