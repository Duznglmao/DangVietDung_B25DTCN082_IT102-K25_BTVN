#include <stdio.h>

int main() {
    int size, i;
    int target;
    int count = 0;                   

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
            count++;                  
        }
    }

    if (count > 0) {
        printf("Phan tu %d xuat hien %d lan trong mang\n", target, count);
    } else {
        printf("So %d khong xuat hien trong mang\n", target);
    }

    return 0;
}
