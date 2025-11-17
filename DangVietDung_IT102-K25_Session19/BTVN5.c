#include <stdio.h>

#define MAX_SIZE 100

void inputArray(int *arr, int *size, char *name) {
    printf("Nhap so phan tu cho mang %s: ", name);
    scanf("%d", size);
    
    printf("Nhap tung phan tu cua mang %s:\n", name);
    for(int i = 0; i < *size; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", (arr + i));
    }
}

int compareArrays(int *a, int *b, int n) {
    for(int i = 0; i < n; i++) {
        if(*(a + i) != *(b + i)) {
            return 0;
        }
    }
    return 1;
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
    int sizeA = 0;
    int sizeB = 0;
    
    inputArray(A, &sizeA, "A");
    printf("\n");
    inputArray(B, &sizeB, "B");
    
    printf("\n");
    printArray(A, sizeA, "A");
    printArray(B, sizeB, "B");
    
    printf("\n");
    
    if(sizeA != sizeB) {
        printf("Hai mang khac nhau (khac so phan tu)\n");
        printf("Ket qua so sanh: 0\n");
    } else {
        int result = compareArrays(A, B, sizeA);
        if(result == 1) {
            printf("Hai mang giong nhau\n");
        } else {
            printf("Hai mang khac nhau\n");
        }
        printf("Ket qua so sanh: %d\n", result);
    }
    
    return 0;
}