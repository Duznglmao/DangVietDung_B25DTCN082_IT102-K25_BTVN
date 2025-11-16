#include <stdio.h>

void calculateSum(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int num1 = 15;
    int num2 = 25;
    int result;
    
    printf("So thu nhat: %d\n", num1);
    printf("So thu hai: %d\n", num2);
    
    calculateSum(&num1, &num2, &result);
    
    printf("\nKet qua: %d + %d = %d\n", num1, num2, result);
    
    return 0;
}