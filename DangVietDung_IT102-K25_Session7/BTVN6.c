#include <stdio.h>

int main() {
    int number, reversed = 0;

    do {
        printf("Nhập một số nguyên dương: ");
        scanf("%d", &number);

        if (number <= 0) {
            printf("Số phải lớn hơn 0. Vui lòng nhập lại!\n");
        }
    } while (number <= 0);

    while (number > 0) {
        int digit = number % 10;          
        reversed = reversed * 10 + digit; 
        number = number / 10;            
    }

    printf("Số đảo ngược của %d là: %d\n", number, reversed);

    return 0;
}
