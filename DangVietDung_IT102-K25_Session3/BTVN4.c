#include <stdio.h>

int main () {
    float toan, van, anh, tong, dtb;

    printf("Nhap vao diem toan: ");
    scanf("%f", &toan);

    printf("Nhap vao diem van: ");
    scanf("%f", &van);

    printf("Nhap vao diem anh: ");
    scanf("%f", &anh);

    tong = toan + van + anh;
    dtb = tong / 3;
    
    printf("Diem tong cua ban la:%.2f\n", tong);
    printf("Diem trung binh cua ban la:%.2f", dtb);

    return 0;
}
