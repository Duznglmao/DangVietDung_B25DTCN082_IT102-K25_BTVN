#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "Skibidi";
    int countNumbers = 0;
    
    printf("Chuoi da khai bao: %s\n", str);
    
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            countNumbers++;
        }
    }
    
    printf("So ky tu la chu cai trong chuoi: %d\n", countNumbers);
    
    return 0;
}