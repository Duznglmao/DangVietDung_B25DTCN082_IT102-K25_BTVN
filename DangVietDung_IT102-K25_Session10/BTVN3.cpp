#include <stdio.h>

int main() {         
    int size, i;                
    int target;                              
    int found = 0;            

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &size);

    int numbers[size];
	 
    printf("Nhap %d phan tu:\n", size);
    for (i = 0; i < size; i++) {
        printf("numbers[%d]: ", i);
        scanf("%d", &numbers[i]);
    }

    printf("Nhap so can tim: ");
    scanf("%d", &target);

    for (i = 0; i < size; i++) {
        if (numbers[i] == target) {
            printf("Chi so cua phan tu can tim la: %d\n", i);  
            found = 1;
            break;                  
        }
    }

    if (found == 0) {
        printf("Khong tim thay\n");
    }

    return 0;
}
