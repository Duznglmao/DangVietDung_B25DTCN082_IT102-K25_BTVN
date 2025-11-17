#include <stdio.h>

#define MAX_SIZE 100

void inputArray(int *arr, int *size) {
    printf("Nhap so phan tu: ");
    scanf("%d", size);
    
    printf("Nhap tung phan tu:\n");
    for(int i = 0; i < *size; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", (arr + i));
    }
}

int countValue(int *arr, int n, int x) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(*(arr + i) == x) {
            count++;
        }
    }
    return count;
}

void printArray(int *arr, int size) {
    printf("Mang: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int x;

    inputArray(arr, &size);
    printf("\n");
    
    printArray(arr, size);
    
    printf("\nNhap gia tri can tim: ");
    scanf("%d", &x);
    
    int result = countValue(arr, size, x);
    
    printf("\nSo lan xuat hien cua %d trong mang: %d\n", x, result);
    
    return 0;
}