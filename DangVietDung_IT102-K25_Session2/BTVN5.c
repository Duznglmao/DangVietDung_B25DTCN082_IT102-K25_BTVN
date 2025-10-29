#include <stdio.h>

int main() {
    int a = 6;             
    int b = 3;             
    float c = 3.6;         

    int Tongnguyen = a + b + (int)c; 
    float Tongthuc = a + b + c;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %.1f\n", c);
    printf("Tong cua ca ba so: %.1f\n", Tongthuc);
    printf("Tong phan nguyen cua ba so: %d\n", Tongnguyen);

    return 0;
}
