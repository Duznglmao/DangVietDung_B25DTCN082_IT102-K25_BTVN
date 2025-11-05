#include <stdio.h>

int main() {
    int arr[] = {12, 5, 9, 1, 20, 15};   
    int n = 6;                           
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {           
        for (j = 0; j < n - i - 1; j++) {    
            if (arr[j] > arr[j + 1]) {       
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep tang dan: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

