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

    int sum = 0;

    printf("\nCac so nguyen to trong mang la: ");
    for (int i = 0; i < n; i++) {
        int x = arr[i];
        int isPrime = 1;  

        if (x < 2) {
            isPrime = 0;
        } else {
            for (int j = 2; j * j <= x; j++) {
                if (x % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", x);
            sum += x;
        }
    }

    printf("\nTong cac so nguyen to = %d\n", sum);

    return 0;
}
