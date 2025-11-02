#include <stdio.h>

int main() {
    int numbers[5] = {1, 3, 5, 7, 9};

    printf("Mang: ");
    for(int i = 0; i < 5; i++) {
        printf("%d  ", numbers[i]);
    }
    printf("\n");

    printf("So chan: ");
    int hasEvenNumer = 0;  

    for(int i = 0; i < 5; i++) {
        if(numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
            hasEvenNumer = 1;
        }
    }

    if(hasEvenNumer == 0) {
        printf("Mang khong chua so chan!\n");
    }

    return 0;
}