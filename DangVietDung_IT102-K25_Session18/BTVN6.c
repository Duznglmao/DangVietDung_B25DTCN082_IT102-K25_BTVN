#include <stdio.h>

int searchElement(int *arr, int n, int value) {
    int *ptr;
    int position = 0;
    
    for (ptr = arr; ptr < arr + n; ptr++) {
        if (*ptr == value) {
            return position;
        }
        position++;
    }
    
    return -1;
}

void printArray(int *arr, int n) {
    printf("Mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 25, 30, 45, 50, 65, 70, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
    int value, result;
    
    printArray(arr, n);
    
    printf("\nNhap gia tri can tim: ");
    scanf("%d", &value);
    
    result = searchElement(arr, n, value);
    
    if (result != -1) {
        printf("\nTim thay gia tri %d tai vi tri %d\n", value, result);
    } else {
        printf("\nKhong tim thay gia tri %d trong mang\n", value);
    }
    
    return 0;
}