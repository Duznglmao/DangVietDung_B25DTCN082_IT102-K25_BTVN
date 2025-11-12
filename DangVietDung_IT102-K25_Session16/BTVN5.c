#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Toi bi ngu";
    int count = 0;
    int inWord = 0; 
    
    printf("Chuoi da khai bao: %s\n", str);
    
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (inWord == 0) {
                inWord = 1;
                count++;
            }
        } else {
            inWord = 0;
        }
    }
    
    printf("So tu trong chuoi: %d\n", count);
    
    return 0;
}