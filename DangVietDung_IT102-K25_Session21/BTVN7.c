#include <stdio.h>
#include <string.h>

struct Book {
    char id[20];
    char title[100];
    char author[50];
    float price;
    char category[50];
};

void inputBook(struct Book books[], int index) {
    getchar(); 
    printf("Nhap ma sach: ");
    fgets(books[index].id, sizeof(books[index].id), stdin);
    books[index].id[strcspn(books[index].id, "\n")] = '\0';

    printf("Nhap ten sach: ");
    fgets(books[index].title, sizeof(books[index].title), stdin);
    books[index].title[strcspn(books[index].title, "\n")] = '\0';

    printf("Nhap tac gia: ");
    fgets(books[index].author, sizeof(books[index].author), stdin);
    books[index].author[strcspn(books[index].author, "\n")] = '\0';

    printf("Nhap gia tien: ");
    scanf("%f", &books[index].price);
    getchar();

    printf("Nhap the loai: ");
    fgets(books[index].category, sizeof(books[index].category), stdin);
    books[index].category[strcspn(books[index].category, "\n")] = '\0';
}

void inputListBook(struct Book books[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin sach thu %d:\n", i + 1);
        inputBook(books, i);
    }
    printf("\nNhap thanh cong!\n");
}

void displayBook(struct Book book) {
    printf("Ma: %s | Ten: %s | Tac gia: %s | Gia: %.2f | The loai: %s\n",
           book.id, book.title, book.author, book.price, book.category);
}

void displayListBook(struct Book books[], int n) {
    if (n == 0) {
        printf("\nDanh sach trong!\n");
        return;
    }
    printf("\n===== DANH SACH SACH =====\n");
    for (int i = 0; i < n; i++) {
        printf("%d. ", i + 1);
        displayBook(books[i]);
    }
}

void addBook(struct Book books[], int *n) {
    int position;
    printf("Nhap vi tri can them (1-%d): ", *n + 1);
    scanf("%d", &position);

    if (position < 1 || position > *n + 1) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    for (int i = *n; i >= position; i--) {
        books[i] = books[i - 1];
    }

    printf("\nNhap thong tin sach moi:\n");
    inputBook(books, position - 1);

    (*n)++; 
    printf("\nThem sach thanh cong!\n");
}

void deleteBook(struct Book books[], int *n) {
    char searchId[20];
    getchar();
    printf("Nhap ma sach can xoa: ");
    fgets(searchId, sizeof(searchId), stdin);
    searchId[strcspn(searchId, "\n")] = '\0';

    int position = -1;
    for (int i = 0; i < *n; i++) {
        if (strcmp(books[i].id, searchId) == 0) {
            position = i;
            break;
        }
    }

    if (position == -1) {
        printf("Khong tim thay sach co ma: %s\n", searchId);
        return;
    }

    for (int i = position; i < *n - 1; i++) {
        books[i] = books[i + 1];
    }

    (*n)--; 
    printf("\nXoa sach thanh cong!\n");
}

void updateBook(struct Book books[], int n) {
    char searchId[20];
    getchar();
    printf("Nhap ma sach can cap nhat: ");
    fgets(searchId, sizeof(searchId), stdin);
    searchId[strcspn(searchId, "\n")] = '\0';

    int position = -1;
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].id, searchId) == 0) {
            position = i;
            break;
        }
    }

    if (position == -1) {
        printf("Khong tim thay sach co ma: %s\n", searchId);
        return;
    }

    printf("\nNhap thong tin moi cho sach:\n");
    inputBook(books, position);
    printf("\nCap nhat thanh cong!\n");
}

void sortBook(struct Book books[], int n) {
    int choice;
    printf("1. Sap xep tang dan\n");
    printf("2. Sap xep giam dan\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &choice);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((choice == 1 && books[i].price > books[j].price) ||
                (choice == 2 && books[i].price < books[j].price)) {
                struct Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
    printf("\nSap xep thanh cong!\n");
}

void searchBook(struct Book books[], int n) {
    char searchTitle[100];
    getchar();
    printf("Nhap ten sach can tim: ");
    fgets(searchTitle, sizeof(searchTitle), stdin);
    searchTitle[strcspn(searchTitle, "\n")] = '\0';

    int found = 0;
    printf("\n===== KET QUA TIM KIEM =====\n");
    for (int i = 0; i < n; i++) {
        if (strstr(books[i].title, searchTitle) != NULL) {
            displayBook(books[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("Khong tim thay sach co ten: %s\n", searchTitle);
    }
}


int main() {
    struct Book books[100];
    int n = 0;
    int choice;

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Nhap so luong va thong tin sach\n");
        printf("2. Hien thi thong tin sach\n");
        printf("3. Them sach vao vi tri\n");
        printf("4. Xoa sach theo ma sach\n");
        printf("5. Cap nhat thong tin sach theo ma sach\n");
        printf("6. Sap xep sach theo gia\n");
        printf("7. Tim kiem sach theo ten sach\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so luong sach: ");
                scanf("%d", &n);
                inputListBook(books, n);
                break;
            case 2:
                displayListBook(books, n);
                break;
            case 3:
                addBook(books, &n);
                break;
            case 4:
                deleteBook(books, &n); 
                break;
            case 5:
                updateBook(books, n);
                break;
            case 6:
                sortBook(books, n);
                break;
            case 7:
                searchBook(books, n);
                break;
            case 8:
                printf("\nThoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("\nLua chon khong hop le!\n");
        }
    } while (choice != 8);

    return 0;
}
