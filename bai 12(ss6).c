#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui long nhap mot so nguyen lon hon 0.\n");
        return 0;
    }
    // Bien de luu cac so trong day Fibonacci
    long long first = 0, second = 1, next;
    printf("Cac so dau tien trong day Fibonacci:\n");
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld ", first);
        } else if (i == 2) {
            printf("%lld ", second);
        } else {
            next = first + second; // Tính so tiep theo
            printf("%lld ", next);
            first = second;       // Cap nhat so thu nhat
            second = next;        // Cap nhat so thu hai
        }
    }
    printf("\n");
}

