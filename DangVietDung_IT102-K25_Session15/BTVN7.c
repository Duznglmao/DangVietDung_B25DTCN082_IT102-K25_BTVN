#include <stdio.h>

int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;
        }
    }
    return 1;
}

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int mid;
    
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    if (!isSorted(arr, n)) {
        printf("Canh bao: Mang CHUA duoc sap xep tang dan!\n");
        printf("Tim kiem nhi phan se khong chinh xac.\n");
    } else {
        printf("Mang DA duoc sap xep tang dan.\n");
    }
    
    int target;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &target);
    
    int result = binarySearch(arr, n, target);
    
    if (result != -1) {
        printf("Tim thay %d tai chi so: %d\n", target, result);
    } else {
        printf("Khong tim thay %d trong mang\n", target);
    }
    
    return 0;
}