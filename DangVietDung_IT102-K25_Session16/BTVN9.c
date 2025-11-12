#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Skibdi yea yea";  
    char c;
    int i, j;

    printf("Chuoi ban dau: %s\n", str);
    printf("Nhap ky tu can xoa: ");
    scanf(" %c", &c);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == c) {
            for (j = i; j < strlen(str); j++) {
                str[j] = str[j + 1];
            }
            i--; 
        }
    }

    printf("Chuoi sau khi xoa: %s\n", str);
    return 0;
}