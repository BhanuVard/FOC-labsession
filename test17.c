#include <stdio.h>

int main() {
    int num, digit;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Digits of the integer are: ");
    while(num != 0) {
        digit = num % 10;
        printf("%d ", digit);
        num /= 10;
    }

    return 0;
}

