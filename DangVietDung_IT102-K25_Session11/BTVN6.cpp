#include <stdio.h>

int main() {
    int arr[] = {10, 5, 8, 20, 3, 20};
    int n = 6;                     
    int i;
    int max1, max2;

    if (n < 2) {
        printf("Mang phai co it nhat 2 phan tu\n");
        return 0;
    }
   
    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;     
            max1 = arr[i];   
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];   
        }
    }

    if (max1 == max2) {
        printf("Hai phan tu lon nhat co gia tri bang nhau\n");
    } else {
        printf("Phan tu lon nhat: %d\n", max1);
        printf("Phan tu lon thu hai: %d\n", max2);
    }

    return 0;
}

