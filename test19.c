#include <stdio.h>

int main() {
    int num, rev = 0, digit;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while(num != 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    printf("Reverse of the integer is %d", rev);
    return 0;
}

