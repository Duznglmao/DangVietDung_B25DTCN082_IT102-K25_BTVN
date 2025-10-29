#include <stdio.h>

int main () {
    float score;

    printf("Nhap Diem: ");
    scanf("%f", &score);

    if (score < 0 || score > 10) {
        printf("Diem so khong hop le\n");
        return 0;
    }

    if (score >= 8) {
        printf("Hoc luc gioi\n");
    }
    else if (score >= 6.5) {
        printf("Hoc luc kha\n");
    }
    else if (score >= 5) {
        printf("Hoc luc trung binh\n");
    }
    else {
        printf("Hoc luc yeu\n");
    }
   
    return 0;
}