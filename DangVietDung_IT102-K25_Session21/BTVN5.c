#include <stdio.h>
#include <string.h>

struct Product {
    char name[50];
    float price;
    int quantity;
};

float calculateSum(struct Product products[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += products[i].price * products[i].quantity;
    }
    return sum;
}

int main() {
    struct Product products[5];

    for (int i = 0; i < 5; i++) {
        printf("San pham thu %d:\n", i + 1);

        printf("Nhap ten san pham: ");
        fgets(products[i].name, sizeof(products[i].name), stdin);
        products[i].name[strcspn(products[i].name, "\n")] = '\0';

        printf("Nhap gia san pham: ");
        scanf("%f", &products[i].price);

        printf("Nhap so luong: ");
        scanf("%d", &products[i].quantity);

        getchar(); 
        printf("\n");
    }

    float sum = calculateSum(products, 5);

    printf("Tong gia tri tat ca san pham: %.2f VND\n", sum);

    return 0;
}
