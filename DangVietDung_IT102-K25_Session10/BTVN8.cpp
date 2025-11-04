#include <stdio.h>

int main() {
    int size, i, j;
    int target;
    int temp;
    int swapped;
    int left, right, mid;
    int found = 0;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &size);

    int numbers[size];

    printf("Nhap %d phan tu: \n", size);
    for (i = 0; i < size; i++) {
        printf("numbers[%d]: ", i);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < size - 1; i++) {
        swapped = 0;
        for (j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }

    printf("Mang sau khi sap xep tang dan:\t");
    for (i = 0; i < size; i++) {
        printf("%d\t", numbers[i]);
    }
    printf("\n");

    printf("Nhap so can tim: ");
    scanf("%d", &target);

    left = 0;
    right = size - 1;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (numbers[mid] == target) {
            printf("Chi so cua phan tu can tim la: %d\n", mid);      
            found = 1;
            break;
        }
        else if (numbers[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (found == 0) {
        printf("Khong tim thay chi so phan tu can tim\n");
    }

    return 0;
}
