#include <stdio.h>

int main() {
    int n;
    long long giaithua = 1; 

    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Khong co giai thua cho so am!\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        giaithua = giaithua * i;
    }

    printf("%d! = %lld\n", n, giaithua);

    return 0;
}
