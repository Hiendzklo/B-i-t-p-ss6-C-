#include <stdio.h>
#include <math.h>

int main() {
    int number, digit1, digit2, digit3;

    printf("Cac so Armstrong 3 chu so:\n");
    for (number = 100; number <= 999; number++) {
        digit1 = number / 100;        
        digit2 = (number / 10) % 10; 
        digit3 = number % 10;        

        if (pow(digit1, 3) + pow(digit2, 3) + pow(digit3, 3) == number) {
            printf("%d\n", number); 
        }
    }
}

