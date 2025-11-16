#include <stdio.h>

void deleteElement(int *arr, int *n, int pos) {
    if (pos < 0 || pos >= *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    
    for (int i = pos; i < *n - 1; i++) {
        *(arr + i) = *(arr + i + 1);
    }
    
    (*n)--;
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
    int pos;
 
    printf("Mang ban dau:\n");
    printArray(arr, n);
    printf("Kich thuoc: %d\n\n", n);
    
    pos = 2;
    printf("Xoa phan tu tai vi tri %d (gia tri %d)\n", pos, arr[pos]);
    deleteElement(arr, &n, pos);
    
    printf("\nMang sau khi xoa:\n");
    printArray(arr, n);
    printf("Kich thuoc: %d\n\n", n);
    
    return 0;
}