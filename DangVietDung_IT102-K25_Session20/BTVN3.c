#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student list[5];  

    for(int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i+1);
        
        printf("Ho ten: "); 
        getchar();
        fgets(list[i].name, 50, stdin);
        list[i].name[strcspn(list[i].name, "\n")] = 0;  
        
        printf("Tuoi: ");
        scanf("%d", &list[i].age);
        
        printf("So dien thoai: ");
        scanf("%s", list[i].phoneNumber);
        
        printf("\n");
    }

    printf("=====DANH SACH SINH VIEN=====\n");
    for(int i = 0; i < 5; i++) {
        printf("%d. Ho ten: %s | Tuoi: %d | SDT: %s\n",
               i+1, list[i].name, list[i].age, list[i].phoneNumber);
    }

    return 0;
}