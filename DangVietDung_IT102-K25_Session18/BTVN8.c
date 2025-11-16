#include <stdio.h>
#include <string.h>

void reverseString(char *input, char *reverse) {
    int len = strlen(input);
    char *start = input;
    char *end = input + len - 1;
    char *ptr = reverse;
    
    while (end >= start) {
        *ptr = *end;
        ptr++;
        end--;
    }
    *ptr = '\0';
}

int main() {
    char inputString[100];
    char reversedString[100]; 
    
    printf("Nhap vao mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    
    int len = strlen(inputString);
    if (len > 0 && inputString[len - 1] == '\n') {
        inputString[len - 1] = '\0';
    }
    
    reverseString(inputString, reversedString); 
    
    printf("\nChuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reversedString);
    
    return 0;
}