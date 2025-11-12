#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "so skibidi";
    int first = 1; 
    
    printf("Chuoi ban dau: %s\n", str);
    printf("Chuoi sau khi viet hoa: ");
    
    for (int i = 0; i < strlen(str); i++) {
        if (first && isalpha(str[i])) {
            printf("%c", toupper(str[i]));
            first = 0; 
        } else {
            printf("%c", str[i]);
        }
        
        if (str[i] == ' ') {
            first = 1;
        }
    }
    
    printf("\n");
    
    return 0;
}