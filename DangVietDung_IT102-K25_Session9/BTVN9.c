#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);  

    int maxCount = 0;
    int mostValue = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            mostValue = arr[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat la: %d\n", mostValue);

    return 0;
}
