#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100];
    
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  

    if (isPalindrome(str)) {
        printf("La palindrome\n");
    } else {
        printf("Khong phai palindrome\n");
    }

    return 0;
}