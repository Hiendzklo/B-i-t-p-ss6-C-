#include <stdio.h>

int main() {
    int numbers[5]; // Mang luu 5 so nguyên
    int sumOdd = 0; // Bien luu tong cac so le

    // Nhap 5 so nguyen tu nguoi dung
    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    // Tính tong các so le
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) { // Kiem tra neu la so le
            sumOdd += numbers[i];
        }
    }
    printf("Tong cac so le trong 5 so da nhap la: %d\n", sumOdd);
}

