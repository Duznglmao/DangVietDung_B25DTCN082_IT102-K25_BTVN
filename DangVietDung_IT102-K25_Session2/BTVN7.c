#include <stdio.h>

int main () {
    int number = 12345;

    int d1  = number % 10;          
    int d2  = (number / 10) % 10;
    int d3  = (number / 100) % 10;
    int d4  = (number / 1000) % 10;
    int d5  = number / 10000;

    int sum = d1 + d2 + d3 + d4 + d5; 
    printf("Tong la: %d", sum);

    return 0;
}
