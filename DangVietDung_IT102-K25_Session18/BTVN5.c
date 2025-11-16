#include <stdio.h>

void updateElement(int *arr, int n, int newValue, int pos) {
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    
    *(arr + pos) = newValue;
}

void printArray(int *arr, int n) {
    printf("Mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int newValue, pos;
    
    printf("Mang ban dau:\n");
    printArray(arr, n);
    
    pos = 2;
    newValue = 99;
    printf("\nCap nhat vi tri %d (gia tri cu: %d) thanh gia tri moi: %d\n", pos, arr[pos], newValue);
    updateElement(arr, n, newValue, pos);
    
    printf("\nMang sau khi cap nhat:\n");
    printArray(arr, n);
    
    return 0;
}