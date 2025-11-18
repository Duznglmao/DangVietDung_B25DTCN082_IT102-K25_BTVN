#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student list[50] = {
        {1, "Nguyen Van A", 20, "0901234567"},
        {2, "Tran Thi B", 19, "0912345678"},
        {3, "Le Van C", 21, "0923456789"},
        {4, "Pham Thi D", 20, "0934567890"},
        {5, "Hoang Van E", 22, "0945678901"}
    };
    
    int count = 5;  

    printf("=== Danh sach sinh vien hien tai (%d nguoi) ===\n", count);
    for(int i = 0; i < count; i++) {
        printf("%d. ID: %d | Ho ten: %s | Tuoi: %d | SDT: %s\n", i+1, list[i].id, list[i].name, list[i].age, list[i].phoneNumber);
    }
    printf("\n");

    int idDelete;
    printf("Nhap ma sinh vien (ID) can xoa: ");
    scanf("%d", &idDelete);

    int found = -1;
    for(int i = 0; i < count; i++) {
        if(list[i].id == idDelete) {
            found = i;
            break;
        }
    }

    if(found == -1) {
        printf("Khong tim thay sinh vien co ID = %d!\n", idDelete);
        return 0;
    }

    printf("Da tim thay sinh vien ID = %d. Dang xoa...\n", idDelete);
    
    for(int i = found; i < count - 1; i++) {
        list[i] = list[i + 1];  
    }
    
    count--;  

    printf("\n=== Danh sach sinh vien sau khi xoa (%d nguoi) ===\n", count);
    for(int i = 0; i < count; i++) {
        printf("%d. ID: %d | Ho ten: %s | Tuoi: %d | SDT: %s\n", i+1, list[i].id, list[i].name, list[i].age, list[i].phoneNumber);
    }

    return 0;
}