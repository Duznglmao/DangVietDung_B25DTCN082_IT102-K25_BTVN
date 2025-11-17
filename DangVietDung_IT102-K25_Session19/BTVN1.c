#include <stdio.h>

int findMax(int *arr, int n) {
    int *ptr = arr;     
    int max = *ptr;     

    for(int i = 1; i < n; i++) {
        if(*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    return max;
}

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int arr[n];  
    printf("Nhap cac phan tu:\n");
    for(int i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", (arr + i));  
    }

    int maxValue = findMax(arr, n);

    printf("Phan tu lon nhat la: %d\n", maxValue);

    return 0;
}
