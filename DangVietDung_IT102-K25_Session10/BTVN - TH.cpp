#include <stdio.h>

int main() {
    int arr[100]; 
    int n = 0; 
    int choice = 0;

    do {
        printf("\n\n------- Quan ly danh sach so nguyen -------\n");
        printf("1. Them phan tu\n");
        printf("2. Xoa phan tu\n");
        printf("3. Cap nhat gia tri\n");
        printf("4. Tim kiem phan tu\n");
        printf("5. Hien thi mang\n");
        printf("6. Sap xep mang (Bubble Sort)\n");
        printf("7. Thoat\n");
        printf("--------------------------------------------\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: { 
                int pos, val;
                if (n >= 100) {
                    printf("Mang da day, khong the them!\n");
                    break; 
                }

                printf("Nhap vi tri can them (tu 0 den %d): ", n);
                scanf("%d", &pos);
                printf("Nhap gia tri can them: ");
                scanf("%d", &val);

                if (pos < 0 || pos > n) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = n; i > pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos] = val;
                    n++;
                    printf("Da them thanh cong!\n");
                }
                break;
            }

            case 2: {
                int pos;
                if (n == 0) {
                    printf("Mang rong, khong co gi de xoa!\n");
                    break;
                }
                
                printf("Nhap vi tri can xoa (tu 0 den %d): ", n - 1);
                scanf("%d", &pos);

                if (pos < 0 || pos >= n) {
                    printf("Vi tri xoa khong hop le!\n");
                } else {
                    for (int i = pos; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--; 
                    printf("Da xoa thanh cong!\n");
                }
                break;
            }

            case 3: { 
                int pos, val;
                if (n == 0) {
                    printf("Mang rong!\n");
                    break;
                }
                
                printf("Nhap vi tri can cap nhat (0 den %d): ", n - 1);
                scanf("%d", &pos);
                
                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    printf("Nhap gia tri moi: ");
                    scanf("%d", &val);
                    arr[pos] = val;
                    printf("Da cap nhat thanh cong!\n");
                }
                break;
            }

            case 4: { 
                int val, found = 0;
                if (n == 0) {
                    printf("Mang rong!\n");
                    break;
                }

                printf("Nhap gia tri can tim: ");
                scanf("%d", &val);
                
                for (int i = 0; i < n; i++) {
                    if (arr[i] == val) {
                        printf("Tim thay %d tai vi tri %d.\n", val, i);
                        found = 1;
                        break; 
                    }
                }
                
                if (found == 0) {
                    printf("Khong tim thay %d.\n", val);
                }
                break;
            }

            case 5: { 
                if (n == 0) {
                    printf("Mang hien dang rong!\n");
                } else {
                    printf("Cac phan tu trong mang: ");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            }

            case 6: { 
                if (n == 0) {
                    printf("Mang rong!\n");
                    break;
                }

                int temp;
                for (int i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                            temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                printf("Da sap xep mang tang dan!\n");
                break;
            }

            case 7: { 
                printf("Good bye!\n");
                break;
            }

            default: { 
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
            }
        } 

    } while (choice != 7); 

    return 0;
}
