#include <stdio.h>

int reverseNumber(int number) {
    int reversed = 0;
    int digit;
    int isNegative = 0;
    
    if (number < 0) {
        isNegative = 1;
        number = -number;
    }
    
    while (number > 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    
    if (isNegative) {
        reversed = -reversed;
    }
    
    return reversed;
}

int main() {
    int input;
    printf("Nhap so: ");
    scanf("%d", &input);
    printf("Dao nguoc: %d\n", reverseNumber(input));
    return 0;
}