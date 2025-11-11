#include <stdio.h>

int removeDuplicates(int arr[], int size) {
    if (size <= 1) {
        return size;
    }  
    int newSize = 1;  
    
    for (int i = 1; i < size; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        
        if (!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    
    return newSize; 
}

int main() {
    int n;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Mang truoc khi loai trung lap:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    int newSize = removeDuplicates(arr, n);
    
    printf("Mang sau khi loai trung lap:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Kich thuoc mang moi: %d\n", newSize);
    
    return 0;
}