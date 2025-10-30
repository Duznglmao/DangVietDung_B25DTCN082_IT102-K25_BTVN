#include <stdio.h>

int main() {
    int rows, cols;

    do {
        printf("Nhap so dong (so duong): ");
        scanf("%d", &rows);
        printf("Nhap so cot (so duong): ");
        scanf("%d", &cols);

        if (rows <= 0 || cols <= 0) {
            printf("Ca hai so dong va so cot phai la so nguyen duong!\n");
        }
    } while (rows <= 0 || cols <= 0);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
