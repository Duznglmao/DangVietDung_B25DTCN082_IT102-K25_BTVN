#include <stdio.h>

struct Car {
    char model[50];  
    int year;       
    float price;   
};

int main() {
    struct Car myCar = {"Exciter", 2025, 17.5};

    printf("Mau xe: %s\n", myCar.model);
    printf("Nam san xuat: %d\n", myCar.year);
    printf("Gia xe: %.1f trieu dong\n", myCar.price);
    
    return 0;
}
