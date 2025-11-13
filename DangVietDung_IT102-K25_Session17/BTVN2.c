#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

void toLowerCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str[100];
    int choice;

    printf("1. Chuyen thanh chu hoa\n");
    printf("2. Chuyen thanh chu thuong\n");
    printf("Nhap lua chon (1 hoac 2): ");
    scanf("%d", &choice);
    getchar(); 

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  

    if (choice == 1) {
        toUpperCase(str);
        printf("Chuoi sau khi chuyen: %s\n", str);
    }
    else if (choice == 2) {
        toLowerCase(str);
        printf("Chuoi sau khi chuyen: %s\n", str);
    }
    else {
        printf("Lua chon khong hop le!\n");
    }

    return 0;
}