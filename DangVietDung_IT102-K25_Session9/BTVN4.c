#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float average = (float)sum / n;

    printf("\nGia tri trung binh cua mang la: %.2f\n", average);

    return 0;
}
