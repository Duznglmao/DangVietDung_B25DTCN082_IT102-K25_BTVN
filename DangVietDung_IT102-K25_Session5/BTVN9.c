#include <stdio.h>

int main() {
    const int BASE_SALARY_PER_DAY = 160000;
    const int BONUS = 200000;
    const int ALLOWANCE_EMPLOYEE = 500000;
    const int ALLOWANCE_TEAM_LEADER = 1000000;
    const int ALLOWANCE_MANAGER = 2000000;

    float salaryCoefficient;
    int numberOfWorkdays, position, allowance, bonus;
    double salary;

    printf("Nhap he so luong: ");
    scanf("%f", &salaryCoefficient);

    if (salaryCoefficient < 1.0 || salaryCoefficient > 10.0) {
        printf("He so luong khong hop le\n");
        return 0;
    }

    printf("Nhap so ngay cong trong thang: ");
    scanf("%d", &numberOfWorkdays);

    if (numberOfWorkdays <= 0 || numberOfWorkdays > 31) {
        printf("So ngay cong khong hop le\n");
        return 0;
    }

    printf("Nhap chuc vu (1: Nhan vien, 2: To truong, 3: Quan ly): ");
    scanf("%d", &position);

    switch (position) {
        case 1:
            allowance = ALLOWANCE_EMPLOYEE;
            break;
        case 2:
            allowance = ALLOWANCE_TEAM_LEADER;
            break;
        case 3:
            allowance = ALLOWANCE_MANAGER;
            break;
        default:
            printf("Chuc vu khong hop le\n");
            return 0;
    }

    if (numberOfWorkdays > 26) {
        bonus = (numberOfWorkdays - 26) * BONUS;
    }

    salary = numberOfWorkdays * BASE_SALARY_PER_DAY * salaryCoefficient + allowance + bonus;

    printf("Phu cap: %d VND\n", allowance);
    printf("Tien thuong: %d VND\n", bonus);
    printf("Tong luong: %.0f VND\n", salary);

    return 0;
}
