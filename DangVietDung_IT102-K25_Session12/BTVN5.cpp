#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int number;
    printf("Nhap so nguyen n: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d la so nguyen to\n", number);
    } else {
        printf("%d khong phai so nguyen to\n", number);
    }

    return 0;
}