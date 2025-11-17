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

void countEvenOdd(int *arr, int n, int *even, int *odd) {
    *even = 0;
    *odd = 0;
    
    for(int i = 0; i < n; i++) {
        if(*(arr + i) % 2 == 0) {
            (*even)++;
        } else {
            (*odd)++;
        }
    }
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
    int even = 0;
    int odd = 0;

    inputArray(arr, &size);
    
    printf("\n");
    printArray(arr, size);
    
    countEvenOdd(arr, size, &even, &odd);
    
    printf("\nSo phan tu chan: %d\n", even);
    printf("So phan tu le: %d\n", odd);
    
    return 0;
}