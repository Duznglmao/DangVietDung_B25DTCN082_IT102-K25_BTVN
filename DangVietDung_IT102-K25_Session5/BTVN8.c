#include <stdio.h>

int main() {
    const int LEVEL1 = 6000;
    const int LEVEL2 = 7000;
    const int LEVEL3 = 8500;
    const int LEVEL4 = 10000;

    float waterVolume;
    float totalCost = 0;

    printf("Nhap vao so met khoi nuoc tieu thu trong thang: ");
    scanf("%f", &waterVolume);

    if (waterVolume < 0) {
        printf("So m3 khong hop le!\n");
    } 
    else if (waterVolume <= 10) {
        totalCost = waterVolume * LEVEL1;
    } 
    else if (waterVolume <= 20) {
        totalCost = 10 * LEVEL1 + (waterVolume - 10) * LEVEL2;
    } 
    else if (waterVolume <= 30) {
        totalCost = 10 * LEVEL1 + 10 * LEVEL2 + (waterVolume - 20) * LEVEL3;
    } 
    else {
        totalCost = 10 * LEVEL1 + 10 * LEVEL2 + 10 * LEVEL3 + (waterVolume - 30) * LEVEL4;
    }

    if (waterVolume >= 0) {
        printf("Tong so tien phai tra la: %.0f VND\n", totalCost);
    }

    return 0;
}
