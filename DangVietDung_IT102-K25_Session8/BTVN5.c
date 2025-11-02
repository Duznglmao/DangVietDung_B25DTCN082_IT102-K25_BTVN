#include <stdio.h>

int main() {
    int numbers[5] = {1, 3, 5, 7, 9};
    int max = numbers[0];
    int min = numbers[0];

    for(int i = 1; i < 5; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
        if(numbers[i] < min) {
            min = numbers[i];
        }
    }

    printf("Mang: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    printf("Lon nhat: %d\n", max);
    printf("Nho nhat: %d\n", min);

    return 0;
}