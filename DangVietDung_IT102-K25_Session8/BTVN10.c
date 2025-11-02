#include <stdio.h>

int main() {
    int n, i, j;
    int arr[100];

    printf("Do dai cua mang la: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Mang sau khi nhap la: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Cac so nguyen to trong mang la: ");
    int found = 0; 

    for (i = 0; i < n; i++) {
        int x = arr[i];
        if (x < 2) continue; 

        int is_prime = 1;  
        for (j = 2; j < x; j++) {
            if (x % j == 0) {
                is_prime = 0;  
                break;
            }
        }

        if (is_prime) {
            printf("%d ", x);
            found = 1;
        }
    }

    if (found == 0) {
        printf("Khong co");
    }
    printf("\n");

    return 0;
}