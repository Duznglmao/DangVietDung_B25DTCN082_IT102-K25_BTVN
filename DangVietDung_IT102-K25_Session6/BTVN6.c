#include <stdio.h>

int main() {
    double a, b;               
    double tong, hieu, tich, thuong;
    int choice;

    printf("Nhap so thu nhat: ");
    scanf("%lf", &a);          
    printf("Nhap so thu hai: ");
    scanf("%lf", &b);

    do {
        printf("*****MENU*****\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Nhap lai 2 so\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                tong = a + b;
                printf("Tong = %.2lf\n", tong);
                break;
            case 2:
                hieu = a - b;
                printf("Hieu = %.2lf\n", hieu);
                break;
            case 3:
                tich = a * b;
                printf("Tich = %.2lf\n", tich);
                break;
            case 4:
                if (b != 0) {
                    thuong = a / b;
                    printf("Thuong = %.2lf\n", thuong);
                } else {
                    printf("Loi: Khong the chia cho 0!\n");
                }
                break;
            case 5:
                printf("Nhap lai so thu nhat: ");
                scanf("%lf", &a);
                printf("Nhap lai so thu hai: ");
                scanf("%lf", &b);
                break;
            case 6:
                printf("Chuong trinh ket thuc.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long nhap lai!\n");
        }

    } while (choice != 6);

    return 0;
}
