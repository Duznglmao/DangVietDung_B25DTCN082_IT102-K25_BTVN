#include <stdio.h>

int main() {
    int n, a, b, c, d, S;

    printf("Nhap vao mot so nguyen co 4 chu so: ");
    scanf("%d", &n);

    a = n / 1000;          
    b = (n / 100) % 10;     
    c = (n / 10) % 10;   
    d = n % 10;          
    S = a + b + c + d;

    printf("Tong cac chu so la: %d\n", S);

    return 0;
}
