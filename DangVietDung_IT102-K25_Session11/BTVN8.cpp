#include <stdio.h>

int main() {
    int arr[100];
    int n, i, j;
    int maxCount = 0;       
    int count;               
    int mostAppear;       

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
    	printf("arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        count = 1; 
        for (j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            mostAppear = arr[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat la: %d\n", mostAppear);
    printf("So lan xuat hien: %d\n", maxCount);

    return 0;
}

