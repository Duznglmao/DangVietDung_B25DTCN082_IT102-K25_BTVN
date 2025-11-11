#include <stdio.h>

int difference(int a, int b) {
    int diff = a - b;
    if (diff < 0) {
        diff = -diff;  
    }
    return diff;
}

int product(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;
    
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Hieu cua %d va %d: %d\n", num1, num2, difference(num1, num2));
    printf("Tich cua %d va %d: %d\n", num1, num2, product(num1, num2));

    return 0;
}