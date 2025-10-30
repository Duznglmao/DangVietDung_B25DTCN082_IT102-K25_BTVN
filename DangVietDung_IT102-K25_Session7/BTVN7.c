#include <stdio.h>
#include <math.h>

int main() {
    int firstNumber, secondNumber;

    do {
        printf("Nhập hai số nguyên dương: ");
        scanf("%d %d", &firstNumber, &secondNumber);

        if (firstNumber < 0 || secondNumber <= 0 || firstNumber > secondNumber) {
            printf("Dữ liệu không hợp lệ! Vui lòng nhập lại.\n");
        }
    } while (firstNumber <= 0 || secondNumber <= 0 || firstNumber > secondNumber);

    printf("Các số nguyên tố trong khoảng [%d, %d]:\n", firstNumber, secondNumber);

    for (int i = firstNumber; i <= secondNumber; i++) {
        if (i < 2) continue;
        int isPrime = 1;

        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d\t", i);
        }
    }

    return 0;
}
