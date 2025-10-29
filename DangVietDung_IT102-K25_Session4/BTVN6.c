#include <stdio.h>

int main() {
    int chisocu, chisomoi, sodien;
    float tiendien;

    printf("Nhap chi so cu: ");
    scanf("%d", &chisocu);

    printf("Nhap chi so moi: ");
    scanf("%d", &chisomoi);

    if (chisomoi < chisocu) {
        printf("Chi so moi phai lon hon chi so cu\n");
        return 1;
    }

    sodien = chisomoi - chisocu;

    if (sodien < 50) {
        tiendien = sodien * 10000;
    } 
    else if (sodien < 100) {
        tiendien = sodien * 15000;
    } 
    else if (sodien < 150) {
        tiendien = sodien * 20000;
    } 
    else if (sodien < 200) {
        tiendien = sodien * 25000;
    } 
    else {
        tiendien = sodien * 30000;
    }

    printf("So dien tieu thu: %d kWh\n", sodien);
    printf("Tien dien phai tra: %.0f VND\n", tiendien);

    return 0;
}
