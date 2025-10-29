#include <stdio.h>

int main() {
    int a = 2;              
    int b = 3;              

    int tong = a + b;        
    int hieu = a - b;       
    int tich = a * b;       
    float thuong = (float)a / b; 

    printf("Tong: %d\n", tong);
    printf("Hieu: %d\n", hieu);
    printf("Tich: %d\n", tich);
    printf("Thuong: %.2f\n", thuong);

    return 0;
}
