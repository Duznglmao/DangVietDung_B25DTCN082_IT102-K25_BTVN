#include <stdio.h>

int main () {
    unsigned int n;
    double A;

    printf("Nhap vao so nguyen n (n>1): ");
    scanf("%u", &n);

    A = 1.0 / ((n-1) * n) 
      + 1.0 / (n * ( n + 1))
      + 1.0 / ((n + 1) * (n + 2));
    
    printf("Gia tri bieu thuc la: %.5lf", A);

    return 0;
}