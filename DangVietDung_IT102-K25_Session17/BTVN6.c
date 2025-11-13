#include <stdio.h>
#include <string.h>

void getWordMax(char str[], int len) {
    int count = 0;          
    int maxCount = 0;        
    int firstChar = 0;       
    int lastChar = 0;       
    int i;

    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (count > maxCount) {
                maxCount = count;
                firstChar = i - count;     
                lastChar = i - 1;         
            }
            count = 0;  
        } else {
            count++;    
        }
    }

    if (maxCount > 0) {
        printf("Tu dai nhat: \"");
        for (i = firstChar; i <= lastChar; i++) {
            printf("%c", str[i]);
        }
        printf("\" (do dai: %d)\n", maxCount);
    } else {
        printf("Khong co tu nao!\n");
    }
}

int main() {
    char str[100];
    int len;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  

    len = strlen(str);  

    getWordMax(str, len);

    return 0;
}