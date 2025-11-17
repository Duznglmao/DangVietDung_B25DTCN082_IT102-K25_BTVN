#include <stdio.h>

#define MAX_SIZE 100

void inputArray(int *arr, int *size) {
    printf("Nhap so phan tu: ");
    scanf("%d", size);
    
    printf("Nhap tung phan tu:\n");
    for(int i = 0; i < *size; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", (arr + i));
    }
}

void printEven(int *arr, int size) {
    if(size == 0) {
        printf("Mang chua duoc nhap!\n");
        return;
    }
    
    printf("Cac phan tu la so chan: ");
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(*(arr + i) % 2 == 0) {
            printf("%d ", *(arr + i));
            count++;
        }
    }
    if(count == 0) {
        printf("Khong co");
    }
    printf("\n");
}

int isPrime(int n) {
    if(n < 2) return 0;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

void printPrime(int *arr, int size) {
    if(size == 0) {
        printf("Mang chua duoc nhap!\n");
        return;
    }
    
    printf("Cac phan tu la so nguyen to: ");
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(isPrime(*(arr + i))) {
            printf("%d ", *(arr + i));
            count++;
        }
    }
    if(count == 0) {
        printf("Khong co");
    }
    printf("\n");
}

void reverseArray(int *arr, int size) {
    if(size == 0) {
        printf("Mang chua duoc nhap!\n");
        return;
    }
    
    int *start = arr;
    int *end = arr + size - 1;
    
    while(start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
    printf("Da dao nguoc mang!\n");
}

void sortAscending(int *arr, int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if(*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
    printf("Da sap xep tang dan!\n");
}

void sortDescending(int *arr, int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if(*(arr + i) < *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
    printf("Da sap xep giam dan!\n");
}

void sortMenu(int *arr, int size) {
    if(size == 0) {
        printf("Mang chua duoc nhap!\n");
        return;
    }
    
    int choice;
    printf("\n=== MENU SAP XEP ===\n");
    printf("6. Tang dan\n");
    printf("7. Giam dan\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &choice);
    
    if(choice == 6) {
        sortAscending(arr, size);
    } else if(choice == 7) {
        sortDescending(arr, size);
    } else {
        printf("Lua chon khong hop le!\n");
    }
}

void searchElement(int *arr, int size) {
    if(size == 0) {
        printf("Mang chua duoc nhap!\n");
        return;
    }
    
    int value;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &value);
    
    int found = 0;
    printf("Phan tu %d xuat hien tai vi tri: ", value);
    for(int i = 0; i < size; i++) {
        if(*(arr + i) == value) {
            printf("%d ", i);
            found = 1;
        }
    }
    
    if(!found) {
        printf("Khong tim thay");
    }
    printf("\n");
}

void displayArray(int *arr, int size) {
    if(size == 0) {
        printf("Mang chua duoc nhap!\n");
        return;
    }
    
    printf("Mang hien tai: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice;
    
    do {
        printf("\n=====================MENU=====================\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang (Khi chon thi menu con hien thi)\n");
        printf("8. Nhap vao mot phan tu va tim kiem phan tu trong mang\n");
        printf("9. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                inputArray(arr, &size);
                printf("Nhap thanh cong!\n");
                displayArray(arr, size);
                break;
                
            case 2:
                printEven(arr, size);
                break;
                
            case 3:
                printPrime(arr, size);
                break;
                
            case 4:
                reverseArray(arr, size);
                displayArray(arr, size);
                break;
                
            case 5:
                sortMenu(arr, size);
                displayArray(arr, size);
                break;
                
            case 6:
                sortAscending(arr, size);
                displayArray(arr, size);
                break;
                
            case 7:
                sortDescending(arr, size);
                displayArray(arr, size);
                break;
                
            case 8:
                searchElement(arr, size);
                break;
                
            case 9:
                printf("Tam biet!\n");
                break;
                
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while(choice != 9);
    
    return 0;
}