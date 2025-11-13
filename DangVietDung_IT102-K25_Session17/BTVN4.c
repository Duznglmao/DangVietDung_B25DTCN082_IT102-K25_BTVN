#include <stdio.h>
#include <string.h>

void deleteChar(char str[], char letter) {
    int i, j;

    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != letter) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';  
}

int main() {
    char str[100];
    char letter;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Nhap ky tu can xoa: ");
    scanf("%c", &letter);

    deleteChar(str, letter);

    printf("Chuoi sau khi xoa '%c': %s\n", letter, str);

    return 0;
}