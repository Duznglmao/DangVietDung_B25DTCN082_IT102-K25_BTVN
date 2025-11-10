#include <stdio.h>
#define MAX 100

int arr[MAX];
int n = 0; 

void nhapMang() {
    printf("Nhap so phan tu (toi da %d): ", MAX);
    scanf("%d", &n);
    if (n <= 0 || n > MAX) {
        printf("So luong khong hop le!\n");
        n = 0;
        return;
    }
    printf("Nhap %d phan tu:\n", n);
    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap mang thanh cong!\n");
}

void inMang() {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    printf("Cac phan tu: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu() {
    if (n >= MAX) {
        printf("Mang da day!\n");
        return;
    }
    int value, pos;
    printf("Nhap gia tri: ");
    scanf("%d", &value);
    printf("Nhap vi tri (0 den %d): ", n);
    scanf("%d", &pos);
    if (pos < 0 || pos > n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    n++;
    printf("Them thanh cong!\n");
}

void suaPhanTu() {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    int pos, newValue;
    printf("Nhap vi tri (0 den %d): ", n-1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);
    arr[pos] = newValue;
    printf("Sua thanh cong!\n");
}

void xoaPhanTu() {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    int pos;
    printf("Nhap vi tri (0 den %d): ", n-1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for(int i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    printf("Xoa thanh cong!\n");
}

void sapXepGiam() {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sap xep giam dan thanh cong!\n");
}

void sapXepTang() {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sap xep tang dan thanh cong!\n");
}

void timTuyenTinh() {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    int x;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    int found = 0;
    printf("Vi tri: ");
    for(int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) {
    	printf("Khong tim thay!\n");
	} else {
		printf("\n");
	}
}

void timNhiPhan() {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    sapXepTang();
    printf("Mang da sap tang de tim kiem nhi phan.\n");
    
    int x;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    
    int left = 0, right = n-1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) {
            printf("Tim thay tai vi tri: %d\n", mid);
            return;
        }
        else if (arr[mid] < x) {
        	left = mid + 1;
		}
        else {
        	right = mid - 1;
		}
    }
    printf("Khong tim thay!\n");
}

void menuConSapXep() {
    char ch;
    do {
        printf("\n--- Sap xep ---\n");
        printf("a. Giam dan\n");
        printf("b. Tang dan\n");
        printf("c. Quay lai\n");
        printf("Chon: ");
        scanf(" %c", &ch);
        if (ch == 'a') { sapXepGiam(); inMang(); }
        else if (ch == 'b') { sapXepTang(); inMang(); }
        else if (ch == 'c') break;
        else printf("Khong hop le!\n");
    } while(1);
}

void menuConTimKiem() {
    char ch;
    do {
        printf("\n--- Tim kiem ---\n");
        printf("a. Tuyen tinh\n");
        printf("b. Nhi phan\n");
        printf("c. Quay lai\n");
        printf("Chon: ");
        scanf(" %c", &ch);
        if (ch == 'a') timTuyenTinh();
        else if (ch == 'b') timNhiPhan();
        else if (ch == 'c') break;
        else printf("Khong hop le!\n");
    } while(1);
}

int main() {
    int choice;
    do {
        printf("\n");
        printf("=============================\n");
        printf("           MENU              \n");
        printf("=============================\n");
        printf("1. Nhap mang\n");
        printf("2. In mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Sap xep\n");
        printf("7. Tim kiem\n");
        printf("8. Thoat\n");
        printf("-----------------------------\n");
        printf("Chon: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
			nhapMang();
			break;
            case 2: 
			inMang(); 
			break;
            case 3: 
			themPhanTu(); 
			break;
            case 4: 
			suaPhanTu(); 
			break;
            case 5: 
			xoaPhanTu(); 
			break;
            case 6: 
			menuConSapXep(); 
			break;
            case 7: 
			menuConTimKiem(); 
			break;
            case 8: 
			printf("Tam biet!\n"); 
			break;
            default: 
			printf("Lua chon khong hop le!\n");
        }
    } while(choice != 8);

    return 0;
}
