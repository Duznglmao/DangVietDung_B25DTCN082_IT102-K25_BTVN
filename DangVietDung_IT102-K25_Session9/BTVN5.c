#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int countEven = 0, countOdd = 0;

    printf("\nCac so chan trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            countEven++;
        }
    }

    printf("\nCac so le trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
            countOdd++;
        }
    }

    printf("\n\nTong so chan = %d", countEven);
    printf("\nTong so le = %d", countOdd);

    return 0;
}
