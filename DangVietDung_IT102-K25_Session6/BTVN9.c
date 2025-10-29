#include <stdio.h>

int main() {
    int a, b, c;           
    int sum, min, max;
    float avg;
    int choice;
    int daNhap = 0;

    do {
        printf("*****MENU*****\n");
        printf("1. Nhap 3 so nguyen\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so thu nhat: ");
                scanf("%d", &a);
                printf("Nhap so thu hai: ");
                scanf("%d", &b);
                printf("Nhap so thu ba: ");
                scanf("%d", &c);
                daNhap = 1;
                printf("Da nhap 3 so thanh cong!\n");
                break;

            case 2:
                if (!daNhap) {
                    printf("Vui long nhap 3 so truoc!\n");
                } else {
                    sum = a + b + c;
                    printf("Tong 3 so = %d\n", sum);
                }
                break;

            case 3:
                if (!daNhap) {
                    printf("Vui long nhap 3 so truoc!\n");
                } else {
                    sum = a + b + c;
                    avg = sum / 3.0;
                    printf("Trung binh cong = %.2f\n", avg);
                }
                break;

            case 4:
                if (!daNhap) {
                    printf("Vui long nhap 3 so truoc!\n");
                } else {
                    min = a;
                    if (b < min) min = b;
                    if (c < min) min = c;
                    printf("So nho nhat = %d\n", min);
                }
                break;

            case 5:
                if (!daNhap) {
                    printf("Vui long nhap 3 so truoc!\n");
                } else {
                    max = a;
                    if (b > max) max = b;
                    if (c > max) max = c;
                    printf("So lon nhat = %d\n", max);
                }
                break;

            case 6:
                printf("Chuong trinh ket thuc.\n");
                break;

            default:
                printf("Lua chon khong hop le, vui long nhap lai!\n");
        }

    } while (choice != 6);

    return 0;
}
