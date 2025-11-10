#include <stdio.h>

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n"); 
}

int main() {
    int numbers[] = {10, 20, 36, 40, 50};
    int length = 5;

    printf("Cac phan tu trong mang: ");
    printArray(numbers, length);

    return 0;
}