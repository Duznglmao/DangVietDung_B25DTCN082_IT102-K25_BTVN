#include <stdio.h>

int main() {
    int size, i, j;
    int temp;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &size);

    int numbers[size];

    printf("Nhap %d phan tu:\n", size);
    for (i = 0; i < size; i++) {
        printf("numbers[%d]: ", i);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep tang dan:\t");
    for (i = 0; i < size; i++) {
        printf("%d\t", numbers[i]);
    }

    return 0;
}
