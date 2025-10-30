#include <stdio.h>

int main() {
    int number, temp, digit, reversed = 0;

    do {
        printf("Nhập một số nguyên dương: ");
        scanf("%d", &number);

        if (number <= 0) {
            printf("Số phải lớn hơn 0. Vui lòng nhập lại!\n");
        }
    } while (1);

    temp = number;  

    while (temp > 0) {
        digit = temp % 10;            
        reversed = reversed * 10 + digit;
        temp = temp / 10;                
    }

    if (reversed == number) {
        printf("%d là số đối xứng\n", number);
    } else {
        printf("%d không phải là số đối xứng\n", number);
    }

    return 0;
}
