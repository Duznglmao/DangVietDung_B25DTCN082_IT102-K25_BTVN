#include <stdio.h>

void sortArray(int *arr, int n) {
    int *i, *j;
    int temp;
    
    for (i = arr; i < arr + n - 1; i++) {
        for (j = i + 1; j < arr + n; j++) {
            if (*i > *j) {
                temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

void printArray(int *arr, int n) {
    printf("Mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11, 90, 45, 33};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Mang ban dau:\n");
    printArray(arr, n);
    
    sortArray(arr, n);
    
    printf("\nMang sau khi sap xep:\n");
    printArray(arr, n);
    
    return 0;
}