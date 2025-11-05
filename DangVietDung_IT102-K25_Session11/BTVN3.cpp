#include <stdio.h>

int main() {
    int arr[] = {2, 3, 5, 8, 12, 17, 23, 38, 52, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = size - 1;
    int mid, searchValue;
    int found = 0;

    printf("Nhap so can tim: ");
    scanf("%d", &searchValue);

    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] == searchValue) {
            printf("Tim thay %d tai chi so %d\n", searchValue, mid);
            found = 1;
            break;
        }
        else if (arr[mid] < searchValue) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (!found) {
        printf("Khong tim thay %d trong mang\n", searchValue);
    }

    return 0;
}
