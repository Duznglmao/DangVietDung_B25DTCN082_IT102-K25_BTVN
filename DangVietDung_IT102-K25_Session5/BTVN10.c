#include <stdio.h>

int main() {
    float electricityUsage;
    int consumerType;
    double stepCharge, rateFee, additionalFee, totalBill;

    const float PRICE_LV1 = 1500;
    const float PRICE_LV2 = 2000;
    const float PRICE_LV3 = 2500;
    const float PRICE_LV4 = 3000;

    const float FEE_FAMILY = 0.05;
    const float FEE_BUSINESS = 0.10;
    const float FEE_PRODUCTION = 0.08;

    printf("Nhap vao so dien tieu thu trong thang: ");
    scanf("%f", &electricityUsage);

    printf("Nhap vao loai ho tieu dung (1: Gia dinh, 2: Kinh doanh, 3: San xuat): ");
    scanf("%d", &consumerType);

    if (electricityUsage <= 0) {
        stepCharge = 0;
    } 
    else if (electricityUsage <= 50) {
        stepCharge = electricityUsage * PRICE_LV1;
    } 
    else if (electricityUsage <= 100) {
        stepCharge = (50 * PRICE_LV1) + (electricityUsage - 50) * PRICE_LV2;
    } 
    else if (electricityUsage <= 200) {
        stepCharge = (50 * PRICE_LV1) + (50 * PRICE_LV2) + (electricityUsage - 100) * PRICE_LV3;
    } 
    else {
        stepCharge = (50 * PRICE_LV1) + (50 * PRICE_LV2) + (100 * PRICE_LV3) + (electricityUsage - 200) * PRICE_LV4;
    }

    switch (consumerType) {
        case 1:
            rateFee = FEE_FAMILY;
            break;
        case 2:
            rateFee = FEE_BUSINESS;
            break;
        case 3:
            rateFee = FEE_PRODUCTION;
            break;
        default:
            printf("Loai ho khong hop le\n");
            return 0;
    }

    additionalFee = stepCharge * rateFee;
    totalBill = stepCharge + additionalFee;

    printf("TONG TIEN DIEN PHAI TRA: %.0f VND\n", totalBill);

    return 0;
}
