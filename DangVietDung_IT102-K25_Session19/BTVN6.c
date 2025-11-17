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

void copyArray(int *src, int *dest, int n) {
    for(int i = 0; i < n; i++) {
        *(dest + i) = *(src + i);
    }
}

void printArray(int *arr, int size, char *name) {
    printf("Mang %s: ", name);
    for(int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int A[MAX_SIZE];
    int B[MAX_SIZE];
    int size = 0;
  
    inputArray(A, &size);
    printf("\n");

    printArray(A, size, "A");
    
    copyArray(A, B, size);
    
    printArray(B, size, "B sau khi sao chep");
    
    return 0;
}