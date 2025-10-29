#include <stdio.h>

int main() {
    int n;
    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0) {
        printf("So vua nhap chia het cho ca 3 va 5\n");
    } else if (n % 3 == 0) {
        printf("So vua nhap chia het cho 3\n");
    } else if (n % 5 == 0) {
        printf("So vua nhap chia het cho 5\n");
    } else {
        printf("So vua nhap khong chia het cho 3 va 5\n");
    }

    return 0;
}
