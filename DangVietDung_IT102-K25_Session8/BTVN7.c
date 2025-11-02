#include <stdio.h>

int main() {
    int size;
    
    printf("Nhap so phan tu: ");
    scanf("%d", &size);
    
    int numbers[100];  
    
    for(int i = 0; i < size; i++) {
        do {
            printf("Nhap phan tu thu %d (phai la so le): ", i+1);
            scanf("%d", &numbers[i]);
            
            if(numbers[i] % 2 == 0) {
                printf("  --> Loi! %d la so chan. Nhap lai!\n", numbers[i]);
            }
        } while(numbers[i] % 2 == 0);  
    }
    
    printf("Mang (chi so le): ");
    for(int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}