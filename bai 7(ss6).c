#include <stdio.h>

int main() {
    int number;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("So ban nhap la so am. Chuyen thanh so duong de xu ly.\n");
        number = -number; 
    }
    printf("Cac uoc cua %d la: ", number);
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

