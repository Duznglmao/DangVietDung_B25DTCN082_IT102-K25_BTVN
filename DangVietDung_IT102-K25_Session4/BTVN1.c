#include <stdio.h>

int main () {
    int n;
    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("So vua nhap la so duong\n");
    }
    else if (n < 0) {
        printf("So vua nhap la so am\n");
    }
    else {
        printf("So vua nhap la so khong\n");
    }

    return 0;
}