#include <stdio.h>

int main() {
    int size;
    int numbers[100]; 
    
    printf("Nhap so phan tu: ");
    scanf("%d", &size);
    
    for(int i = 0; i < size; i++) {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
    
    printf("Mang: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}