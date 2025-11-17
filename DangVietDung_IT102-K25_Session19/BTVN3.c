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

float average(int *arr, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return (float)sum / n;
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

    inputArray(arr, &size);
    printf("\n");
    
    printArray(arr, size);
    
    float avg = average(arr, size);
    
    printf("\nGia tri trung binh cua mang: %.2f\n", avg);
    
    return 0;
}