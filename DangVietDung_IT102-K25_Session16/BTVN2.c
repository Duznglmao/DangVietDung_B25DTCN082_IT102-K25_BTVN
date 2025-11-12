#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "I feel so skibidi";
    
    printf("Chuoi ky tu ban dau: %s\n", str);
    printf("Cac ky tu trong chuoi la: ");
    
    for (int i = 0; i < strlen(str); i++) {
        printf("%c ", str[i]);
    }
    
    printf("\n");
    
    return 0;
}