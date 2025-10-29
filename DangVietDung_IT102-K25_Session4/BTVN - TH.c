#include <stdio.h>

int main() {
    int namsinh;
    float diem;
    int tuoi;

    printf("Nhap nam sinh: ");
    scanf("%d", &namsinh);
    printf("Nhap diem trung binh: ");
    scanf("%f", &diem);

    if (namsinh <= 1900 || namsinh > 2025) {
        printf("Nam sinh khong hop le\n");
        return 0; 
    }

    tuoi = 2025 - namsinh;

    printf("Thong tin sinh vien:\n");
    printf("Nam sinh: %d\n", namsinh);
    printf("Tuoi: %d\n", tuoi);

    printf("Hoc luc: ");
    if (diem < 5.0)
        printf("Yeu\n");
    else if (diem < 6.5)
        printf("Trung binh\n");
    else if (diem < 8.0)
        printf("Kha\n");
    else
        printf("Gioi\n");

    return 0;
}
