#include <stdio.h>

int main() {
    int n;
    int even_number = 0; 
    int odd_number = 0;  

    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("n phai lon hon 0\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            even_number++; 
        } else {
            odd_number++;   
        }
    }

    printf("Tu 1 den %d:\n", n);
    printf("So chan: %d\n", even_number);
    printf("So le: %d\n", odd_number);

    return 0;
}
