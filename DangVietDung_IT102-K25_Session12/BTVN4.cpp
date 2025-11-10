#include <stdio.h>

int findMax(int array[], int size) {
    if (size <= 0) {
        return -1; 
    }
    
    int max = array[0]; 
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    int numbers[] = {12, 45, 7, 23, 36, 89, 34};
    int length = 7;

    int result = findMax(numbers, length);
    
    if (result != -1) {
        printf("So lon nhat trong mang la: %d\n", result);
    } else {
        printf("Loi: Mang rong!\n");
    }

    return 0;
}