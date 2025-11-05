#include <stdio.h>

int main() {
    char arr[][10] = {"sinh", "ty", "biet", "ly"};
    int n = 5;
    char key[10];
    int i, j, found = 0;

    printf("Nhap chuoi can tim: ");
    scanf("%9s", key);

    for (i = 0; i < n; i++) {
        j = 0;
        while (key[j] == arr[i][j]) {
            if (key[j] == '\0') {
                found = 1;
                break;
            }
            j++;
        }

        if (found) {
            printf("Tim thay \"%s\" tai vi tri %d\n", key, i);
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay \"%s\" trong mang\n", key);
    }

    return 0;
}

