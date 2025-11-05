#include <stdio.h>

int main() {
    int arr[100];
    int n, i;
    int buyPrice;    
    int loss, minLoss;  
    int hasLoss = 0;    

    printf("Nhap so thang (n >= 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("So thang phai >= 2\n");
        return 0;
    }

    printf("Nhap gia co phieu tung thang:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    buyPrice = arr[0];      
    minLoss = buyPrice - arr[1];  

    for (i = 1; i < n; i++) {
        loss = buyPrice - arr[i];     
        if (loss > 0) {              
            if (!hasLoss || loss < minLoss) {
                minLoss = loss;
            }
            hasLoss = 1;
        }
    }

    if (!hasLoss) {
        printf("Khong co thang nao bi lo. Ban co the ban va thu duoc lai.\n");
    } else {
        printf("So lo thap nhat neu ban: %d\n", minLoss);
    }

    return 0;
}

