#include <stdio.h>

int main() {
    int number, isPrime = 1; // Bien dung de kiem tra so nguyen to (1: dung, 0: sai)
    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);

    // Kiem tra cac truong hop dac biet
    if (number <= 1) {
        isPrime = 0; 
    } else {
        //kiem tra so nguyen to
        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                isPrime = 0; // Neu chia het cho i thi ko phai la so nguyen to
                break;
            }
        }
    }
    if (isPrime) {
        printf("%d la so nguyen to.\n", number);
    } else {
        printf("%d khong phai la so nguyen to.\n", number);
    }
}

