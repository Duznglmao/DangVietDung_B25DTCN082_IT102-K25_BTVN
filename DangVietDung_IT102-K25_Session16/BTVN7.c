#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "Dungxyz9999@gmail.com";
    int countLetter = 0;
    int countNumber = 0;
    int count_Special_Char = 0;
    
    printf("Chuoi da khai bao: %s\n", str);

    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            countLetter++;
        } else if (isdigit(str[i])) {
            countNumber++;
        } else if (str[i] != ' ') {
            count_Special_Char++;
        }
    }
    
    printf("So ky tu la chu cai: %d\n", countLetter);
    printf("So ly tu la chu so: %d\n", countNumber);
    printf("So ky tu dac biet: %d\n", count_Special_Char);
    
    return 0;
}