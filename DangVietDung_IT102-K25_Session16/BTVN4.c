#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Skibidi";
    char letter;
    int count = 0;
    
    printf("Chuoi da khai bao: %s\n", str);
    
    printf("Nhap vao mot ky tu: ");
    scanf("%c", &letter);
    
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == letter) {
            count++;
        }
    }
    
    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", letter, count);
    
    return 0;
}