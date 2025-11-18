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

    int pos;
    printf("Nhap vi tri can chen (1 den %d): ", count + 1);
    scanf("%d", &pos);

    if(pos < 1 || pos > count + 1) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }

    struct Student newStudent;

    printf("Nhap thong tin sinh vien moi:\n");
    printf("ID: ");
    scanf("%d", &newStudent.id);
    getchar();

    printf("Ho ten: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = 0;

    printf("Tuoi: ");
    scanf("%d", &newStudent.age);

    printf("So dien thoai: ");
    scanf("%s", newStudent.phoneNumber);

    for(int i = count; i >= pos; i--) {
        list[i] = list[i-1];
    }

    list[pos - 1] = newStudent;
    count++;

    printf("\n=== Danh sach sinh vien sau khi chen (%d nguoi) ===\n", count);
    for(int i = 0; i < count; i++) {
        printf("%d. ID: %d | Ho ten: %s | Tuoi: %d | SDT: %s\n", i+1, list[i].id, list[i].name, list[i].age, list[i].phoneNumber);
    }

    return 0;
}