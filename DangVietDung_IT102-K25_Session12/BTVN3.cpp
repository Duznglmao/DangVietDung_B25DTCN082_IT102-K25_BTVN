#include <stdio.h>

long long factorial(int n) {
    long long sum = 1;
     for(int i = 2; i <= n; i++) {
        sum *= i;
    }
    return sum;
}

int main () {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    long long result = factorial(n);
    printf("%d! = %lld", n, result);
    return 0;
}