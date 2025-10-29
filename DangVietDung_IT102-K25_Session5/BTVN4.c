#include <stdio.h>

int main() {
    const float LEVEL1 = 5.0;  
    const float LEVEL2 = 10.0;  

    float income, taxToPay;
    int taxRate;

    printf("So tien: ");
    scanf("%f", &income);

    if (income <= LEVEL1) {
        taxRate = 5;
    }
    else if (income <= LEVEL2) {
        taxRate = 10;
    }
    else {
        taxRate = 15;
    }

    taxToPay = income * (taxRate / 100.0);

    printf("Thue thu nhap phai dong la: %.2f\n", taxToPay);

    return 0;
}
