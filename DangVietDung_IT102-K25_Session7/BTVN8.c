#include <stdio.h>

int main() {
    int n, x;
    int count = 0;

    printf("Nhap so n va chu so x (0-9): ");
    scanf("%d %d", &n, &x);

    if (x < 0 || x > 9) {
        printf("Chu so khong hop le!\n");
        return 0;
    }

    if (n == 0 && x == 0) {
        count = 1;
    } else {
        while (n != 0) {
            int chu_so = n % 10;
            if (chu_so == x) {
                count++;
            }
            n = n / 10;
        }
    }

    printf("Chu so %d xuat hien %d lan trong so vua nhap.\n", x, count);

    return 0;
}
