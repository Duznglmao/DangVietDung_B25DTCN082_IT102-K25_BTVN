#include <stdio.h>

int sum(int a, int b) {
    return a + b; 
}

int main() {
    int x, y;
    
    printf("Nhap so thu nhat: ");
    scanf("%d", &x);

    printf("Nhap so thu hai: ");
    scanf("%d", &y);

    int result = sum(x, y);

    printf("Tong = %d\n", result);

    return 0;
}

