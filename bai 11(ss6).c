#include <stdio.h>
#include <stdbool.h>

// kiem tra so nguyen to
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) { // Kiem tra chia het tu 2 den sqrt(num)
        if (num % i == 0) {
            return false; // Neu chia het cho i thì khong phai so nguyen to
        }
    }
    return true; // Neu khong chia het cho bat ki so nao thi la so nguyen to
}

int main() {
    int n;
    int count = 0;  // Ðem so nguyên to dã tìm du?c
    int number = 2; // So bat dau kiem tra
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    printf("Cac so nguyen to dau tien la:\n");
    while (count < n) {
        if (isPrime(number)) {
            printf("%d ", number);
            count++;  
        }
        number++; 
    }
    printf("\n");

}

