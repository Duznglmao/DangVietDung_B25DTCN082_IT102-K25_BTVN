#include <stdio.h>
#include <math.h>

int main () {
    unsigned int a, b;
    float S;

    printf("Nhap vao hai so nguyen duong: ");
    scanf("%u %u", &a, &b);

    S = (sqrt (pow(a, 2) + pow(b, 2))) / (a + b)
      + (sqrt(a) + sqrt(b)) / (a * b);

    printf("Gia tri cua bieu thuc la: %.2lf", S);

    return 0;
}