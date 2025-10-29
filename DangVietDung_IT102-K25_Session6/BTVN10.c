#include <stdio.h>

int main() {
    int n, reverseN = 0, digit;

    printf("Nhap so nguyen: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        reverseN = reverseN * 10 + digit;
        n /= 10;
    }

    printf("Cac chu so la: ");
    while (reverseN > 0) {
        digit = reverseN % 10;
        printf("%d ", digit);
        reverseN /= 10;
    }

    printf("\n");
    return 0;
}
