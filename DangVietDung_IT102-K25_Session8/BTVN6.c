#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};  
    
    printf("Mang cu: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    for(int i = 0; i < 5; i++) {
        if(numbers[i] % 2 == 1) {      
            numbers[i] = numbers[i] + 2;
        } else {                         
            numbers[i] = numbers[i] + 3;
        }
    }

    printf("Mang moi: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}