#include <stdio.h>

int main() {
    int N, i, sum = 0;

    printf("Nhap mot so nguyen duong N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        sum = sum + i;
    }

    printf("Tong tu 1 den %d la: %d\n", N, sum);

    return 0;
}
