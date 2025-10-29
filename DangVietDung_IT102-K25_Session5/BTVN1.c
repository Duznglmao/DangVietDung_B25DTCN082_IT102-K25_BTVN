#include <stdio.h>

int main () {
    int a, b;

    printf("Nhap so a: ");
    scanf("%d", &a);
    
    printf("Nhap so b: ");
    scanf("%d", &b);

    if (a < b) {
        printf("So lon hon la: %d\n", b);
    }
    else if (a > b) {
        printf("So lon hon là: %d\n", a);
    }
    else {
        printf("Hai so bang nhau\n");
    }

    return 0;
}