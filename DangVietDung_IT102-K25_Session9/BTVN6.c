#include <stdio.h>

int main() {
    int n, x;

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nNhap gia tri can tim x: ");
    scanf("%d", &x);

    int found = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Gia tri %d duoc tim thay tai vi tri thu %d\n", x, i + 1);
            found = 1;
        }
    }

    if (found == 0) {
        printf("Gia tri %d khong ton tai trong mang.\n", x);
    }

    return 0;
}
