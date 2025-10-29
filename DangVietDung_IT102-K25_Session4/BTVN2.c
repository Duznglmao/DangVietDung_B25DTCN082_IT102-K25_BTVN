#include <stdio.h>

int main () {
    int n;
    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("So vua nhap la so chan\n");
    }
    else {
        printf("So vua nhap la so le\n");
    }

    return 0;
}