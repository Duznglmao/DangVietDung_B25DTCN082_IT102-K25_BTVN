#include <stdio.h>

int main() {
    int num = 100;
    int *ptr = &num;

    printf("Gia tri cua num: %d\n", num);
    printf("Dia chi cua num: %p\n", &num);
    printf("Gia tri thong qua con tro: %d\n", *ptr);
    printf("Dia chi thong qua con tro: %p\n", ptr);
    
    *ptr = 200;
    printf("Gia tri moi cua num: %d\n", num);
    
    return 0;
}