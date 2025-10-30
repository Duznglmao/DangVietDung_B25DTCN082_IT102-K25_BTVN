#include <stdio.h>
#include <math.h>  

int main() {
    int number, temp, digit, count = 0;
    int sum = 0;

    do {
        printf("Nhập một số nguyên dương: ");
        scanf("%d", &number);

        if (number <= 0) {
            printf("Số phải lớn hơn 0. Vui lòng nhập lại!\n");
        }
    } while (number <= 0);

    temp = number;

    while (temp > 0) {
        count++;
        temp /= 10;
    }

    temp = number;

    while (temp > 0) {
        digit = temp % 10;           
        sum += pow(digit, count);    
        temp /= 10;                   
    }

    if (sum == number) {
        printf("%d là số Armstrong.\n", number);
    } else {
        printf("%d không phải là số Armstrong.\n", number);
    }

    return 0;
}
