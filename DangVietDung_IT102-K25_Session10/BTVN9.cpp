#include <stdio.h>

int main() {
    int n, i, j, id;
    int temp, swapped;
    int left, right, mid;
    int found = 0;

    printf("Nhap so luong san pham: ");
    scanf("%d", &n);

    int prices[n];

    printf("Nhap gia cua %d san pham:\n", n);
    for (i = 0; i < n; i++) {
        printf("San pham %d: ", i);
        scanf("%d", &prices[i]);
    }

    printf("Nhap ma san pham can tim (0 den %d): ", n-1);
    scanf("%d", &id);

    if (id < 0 || id >= n) {
        printf("Ma san pham khong hop le!\n");
        return 0;
    }

    int target_price = prices[id];  
    printf("Gia san pham ma %d: %d\n", id, target_price);

    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (prices[j] > prices[j + 1]) {
                temp = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) break;
    }

    printf("Danh sach gia san pham sau khi sap xep tang dan:\t");
    for (i = 0; i < n; i++) {
        printf("%d\t", prices[i]);
    }
    printf("\n");

    left = 0;
    right = n - 1;
    found = 0;

    while (left <= right) {
        mid = left + (right - left) / 2;
        if (prices[mid] == target_price) {
            found = 1;
            break;
        }
        else if (prices[mid] < target_price) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return 0;
}
