#include <stdio.h>

int main() {
    char d;

    printf("Nhap vao mot ky tu: ");
    scanf("%c", &d);

    if (d >= 'a' && d <= 'z') {
        d = d - 32;
        printf("Chu hoa tuong ung: %c\n", d);
    } 
    else if (d >= 'A' && d <= 'Z') {
        d = d + 32;
        printf("Chu thuong tuong ung: %c\n", d);
    } 
    else {
        printf("Khong phai chu cai\n");
    }

    return 0;
}
