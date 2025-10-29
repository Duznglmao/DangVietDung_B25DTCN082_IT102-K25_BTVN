#include <stdio.h>

int main () {
    double a, b, result;
    char operator;

    printf("Nhap vao hai so thuc a, b: ");
    scanf("%lf %lf", &a, &b);

    printf("Nhap vao mot toan tu (+ - * /):");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
        result = a + b;
        printf("Ket qua la: %.2lf\n", result);
        break;
        
        case '-':
        result = a - b;
        printf("Ket qua la: %.2lf\n", result);
        break;

        case '*':
        result = a * b;
        printf("Ket qua la: %.2lf\n", result);
        break;

        case '/':
        if (b == 0) {
            printf("Loi: Khong the chia cho 0\n");
        } else {
            result = a / b;
            printf("Ket qua la: %.2lf\n", result);
        }
        break;
        
        default:
        printf("Loi: Toan tu khong hop le\n");
    }

    return 0;
}