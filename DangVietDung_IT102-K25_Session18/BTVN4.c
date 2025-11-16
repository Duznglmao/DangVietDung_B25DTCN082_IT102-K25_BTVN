#include <stdio.h>

void printArray(int *arr, int n) {
    int *ptr;
    printf("Cac phan tu trong mang:\n");
    for (ptr = arr; ptr < arr + n; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");
}

int main() {
    int arr[] = {15, 28, 42, 56, 73, 89, 91};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);
    
    printf("\nSo phan tu trong mang: %d\n", n);
    
    return 0;
}