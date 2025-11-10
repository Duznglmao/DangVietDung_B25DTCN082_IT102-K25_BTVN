#include <stdio.h>

int gcd(int a, int b) {
    if (a < 0) {
    	a = -a;
	}
    if (b < 0) {
    	b = -b;
	}
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1 = 36;
    int num2 = 18;
    
    int ucln = gcd(num1, num2);
    
    printf("UCLN cua %d va %d la: %d\n", num1, num2, ucln);
    
    return 0;
}
