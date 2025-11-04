#include <stdio.h>

int main() {
    int size, i;
    int target;
    int left, right, mid;
    int found = 0;                     

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &size);

    int numbers[size];

    printf("Nhap %d phan tu (tang dan):\n", size);
    for (i = 0; i < size; i++) {
        printf("numbers[%d]: ", i);
        scanf("%d", &numbers[i]);
    }

    printf("Nhap so can tim: ");
    scanf("%d", &target);

    left = 0;
    right = size - 1;

    while (left <= right) {
        mid = left + (right - left) / 2;   
        if (numbers[mid] == target) {
            printf("Chi so cua phan tu can tim la: %d\n", mid);           
            found = 1;
            break;
        }
        else if (numbers[mid] < target) {
            left = mid + 1;                
        }
        else {
            right = mid - 1;               
        }
    }

    if (found == 0) {
        printf("Khong tim thay chi so phan tu can tim\n");
    }

    return 0;
}
