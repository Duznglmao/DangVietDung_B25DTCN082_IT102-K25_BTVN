#include <stdio.h>

void mostFrequent(int arr[], int n) {
    int maxCount = 0, frequentNum = arr[0];
    int count, value;

    for (int i = 0; i < n; i++) {
        value = arr[i];
        count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == value) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            frequentNum = value;
        }
    }

    printf("So xuat hien nhieu nhat: %d\n", frequentNum);
    printf("Tan suat: %d lan\n", maxCount);
}

int main() {
    int n;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    mostFrequent(arr, n);
    return 0;
}