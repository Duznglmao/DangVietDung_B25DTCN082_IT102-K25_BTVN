#include <stdio.h>

int sumOfDigits(int number) {
    if (number < 0) {
        number = -number;
    }
    
    int sum = 0;
    int digit;
    
    if (number == 0) {
        return 0;
    }
    
    while (number > 0) {
        digit = number % 10;     
        sum += digit;            
        number = number / 10;    
    }
    
    return sum;
}

int main() {
    int input;
    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &input);
    
    printf("Tong cac chu so cua %d la: %d\n", input, sumOfDigits(input));

    return 0;
}