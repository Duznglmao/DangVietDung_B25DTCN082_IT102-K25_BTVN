#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

void searchStudent(struct Student students[], int count, char searchName[]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("\n=====Thong tin hoc sinh ban tim kiem=====\n");
            printf("Ten: %s\n", students[i].name);
            printf("Tuoi: %d\n", students[i].age);
            printf("Diem trung binh: %.2f\n", students[i].grade);
            return;
        }
    }
    printf("\nKhong tim thay hoc sinh co ten: %s\n", searchName);
}

int main() {
    struct Student students[5];
    int count = sizeof(students) / sizeof(students[0]);

    for (int i = 0; i < count; i++) {
        printf("Hoc sinh thu %d:\n", i + 1);

        printf("Nhap ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Nhap tuoi: ");
        scanf("%d", &students[i].age);

        printf("Nhap diem trung binh: ");
        scanf("%f", &students[i].grade);

        getchar(); 
        printf("\n");
    }

    char searchName[50];
    printf("Nhap ten hoc sinh can tim: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    searchStudent(students, count, searchName);

    return 0;
}
