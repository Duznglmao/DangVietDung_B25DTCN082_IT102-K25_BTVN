#include <stdio.h>

int main() {
    int day, month, year, so_ngay;

    printf("ngay = ");
    scanf("%d", &day);
    printf("thang = ");
    scanf("%d", &month);
    printf("nam = ");
    scanf("%d", &year);

    if (year < 1) {
        printf("Nam khong hop le\n");
        return 0;
    }
    if (month < 1 || month > 12) {
        printf("Thang khong hop le\n");
        return 0;
    }

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            so_ngay = 31;
            break;
        case 4: case 6: case 9: case 11:
            so_ngay = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                so_ngay = 29;
            else
                so_ngay = 28;
            break;
    }

    if (day >= 1 && day <= so_ngay)
        printf("Ngay thang nam hop le\n");
    else
        printf("Ngay thang nam khong hop le\n");

    return 0;
}
