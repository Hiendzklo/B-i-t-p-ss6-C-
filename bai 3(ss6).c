#include <stdio.h>

int main() {
    int password = 12345; 
    int input;             

    printf("Nhap mat khau: ");
    scanf("%d", &input); 
    // So s�nh mat khau
    if (password==input) { 
        printf("Mat khau chinh xac!\n");
    } else {
        printf("Mat khau sai!\n");
    }
}

