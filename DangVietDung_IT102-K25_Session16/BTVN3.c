#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Skibidi";
    int length = strlen(str);
    
    printf("Chuoi ban dau: %s\n", str);
    printf("Chuoi dao nguoc: ");
    
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    
    printf("\n");
    
    return 0;
}