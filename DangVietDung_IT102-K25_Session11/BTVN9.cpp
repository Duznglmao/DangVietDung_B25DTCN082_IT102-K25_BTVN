#include <stdio.h>

int main() {
    int arr[100], n;
    int i, j, k;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Mang khong can loai bo trung lap\n");
        return 0;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
    	printf("arr[%d]= ",i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;    
                j--;     
            }
        }
    }

    printf("Mang sau khi loai bo trung lap: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

