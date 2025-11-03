#include <stdio.h>

int main() {
    int n, i, j;

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap %d phan tu:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxCount = 0;

    for(i = 0; i < n; i++) {
        int count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
        }
    }

    printf("Cac phan tu xuat hien nhieu nhat (%d lan): ", maxCount);
    for(i = 0; i < n; i++) {
        int count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count == maxCount) {
            int printed = 0;
            for(j = 0; j < i; j++) {
                if(arr[j] == arr[i]) {
                    printed = 1;
                    break;
                }
            }
            if(!printed) {
                printf("%d ", arr[i]);
            }
        }
    }

    return 0;
}
