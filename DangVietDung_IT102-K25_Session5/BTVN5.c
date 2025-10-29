#include <stdio.h>

int main() {
    const int BASE_TICKET_PRICE = 20000; 
    int age, percent, ticketPrice;

    printf("Nhap tuoi cua hanh khach: ");
    scanf("%d", &age);

    if (age < 0 || age > 100) {
        printf("Tuoi khong hop le\n");
        return 1;
    }

    if (age < 6) {
        percent = 0;
    } 
    else if (age <= 18) {
        percent = 50;
    } 
    else if (age <= 60) {
        percent = 100;
    } 
    else {
        percent = 70;
    }

    ticketPrice = BASE_TICKET_PRICE * percent / 100;

    printf("So tien ve: %d VND\n", ticketPrice);

    return 0;
}
