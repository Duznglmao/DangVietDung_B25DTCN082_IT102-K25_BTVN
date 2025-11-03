#include <stdio.h>

int main() {
    int n;
    
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int arr[n]; 

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nCac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
