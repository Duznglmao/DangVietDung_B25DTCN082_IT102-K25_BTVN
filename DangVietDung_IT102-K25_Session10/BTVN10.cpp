#include <stdio.h>

int main() {
    int n, i, j, target;
    int arr[100]; 

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    printf("Nhap %d phan tu cua mang:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap so nguyen can tim: ");
    scanf("%d", &target);
    printf("\n"); 

    int min = arr[0];
    
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("So nguyen nho nhat trong mang la: %d\n", min);

    int min_idx, temp;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    printf("Mang sau khi sap xep tang dan: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int left = 0;
    int right = n - 1;
    int mid;
    int found = 0; 
    
    while (left <= right) {
        mid = left + (right - left) / 2; 

        if (arr[mid] == target) {
            printf("Tim thay %d tai chi so %d trong mang da sap xep.\n", target, mid);
            found = 1;
            break; 
        } 
        else if (arr[mid] < target) {
            left = mid + 1;
        } 
        else { 
            right = mid - 1;
        }
    }

    if (found == 0) {
        printf("Khong tim thay\n");
    }

    return 0;
}
