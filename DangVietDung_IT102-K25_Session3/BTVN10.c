#include <stdio.h>
#include <math.h>
 
 int main() {
    unsigned int a, b;
    float S;

    printf("Nhap vao hai so nguyen duong: ");
    scanf("%u %u", &a, &b);

    S = sqrt(a + sqrt(b + 1))
      + sqrt(b + sqrt(pow(a, 2) + pow(b, 2)));

    printf("Gia tri bieu thuc la: %.2lf", S);

    return 0;
 }