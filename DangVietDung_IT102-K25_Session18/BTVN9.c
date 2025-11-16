#include <stdio.h>

void insertElement(int *arr, int *n, int newValue, int pos) {
    if (pos < 0 || pos > *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    
    for (int i = *n; i > pos; i--) {
        *(arr + i) = *(arr + i - 1);
    }
    
    *(arr + pos) = newValue;
    (*n)++;
}

void printArray(int *arr, int n) {
    printf("Mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int newValue, pos;

    printf("Mang ban dau:\n");
    printArray(arr, n);
    printf("Kich thuoc: %d\n\n", n);
    
    pos = 2;
    newValue = 99;
    printf("Them gia tri %d vao vi tri %d\n", newValue, pos);
    insertElement(arr, &n, newValue, pos);
    
    printf("\nMang sau khi them:\n");
    printArray(arr, n);
    printf("Kich thuoc: %d\n\n", n);
    
    return 0;
}