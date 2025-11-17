#include <stdio.h>

#define MAX 100

void inputArray(int *arr, int *size) {
    printf("Nhap so phan tu: ");
    scanf("%d", size);

    printf("Nhap tung phan tu:\n");
    for (int i = 0; i < *size; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", (arr + i));     
    }
}

void displayArray(int *arr, int *size) {
    if (*size == 0) {
        printf("Mang chua duoc nhap!\n");
        return;
    }

    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < *size; i++) {
        printf("%d ", *(arr + i));  
    }
    printf("\n");
}

int getLength(int *size) {
    return *size;
}

int getSum(int *arr, int *size) {
    int sum = 0;
    for (int i = 0; i < *size; i++) {
        sum += *(arr + i);         
    }
    return sum;
}

int getMax(int *arr, int *size) {
    int max = *arr;                 
    for (int i = 1; i < *size; i++) {
        if (*(arr + i) > max) {     
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int arr[MAX];
    int size = 0;
    int choice;

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Nhap mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Do dai mang\n");
        printf("4. Tong cac phan tu\n");
        printf("5. Gia tri lon nhat\n");
        printf("6. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputArray(arr, &size);
                printf("Nhap thanh cong!\n");
                break;

            case 2:
                displayArray(arr, &size);
                break;

            case 3:
                if (size == 0) {
                    printf("Mang chua duoc nhap!\n");
                } else {
                    printf("Do dai mang: %d\n", getLength(&size));
                }
                break;

            case 4:
                if (size == 0) {
                    printf("Mang chua duoc nhap!\n");
                } else {
                    printf("Tong cac phan tu: %d\n", getSum(arr, &size));
                }
                break;

            case 5:
                if (size == 0) {
                    printf("Mang chua duoc nhap!\n");
                } else {
                    printf("Gia tri lon nhat: %d\n", getMax(arr, &size));
                }
                break;

            case 6:
                printf("Tam biet!\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (choice != 6);

    return 0;
}
