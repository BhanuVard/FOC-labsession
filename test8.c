#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        sum = -(n / 2);
    } else {
        sum = (n / 2) + 1;
    }

    printf("The sum of the series is: %d", sum);

    return 0;
}
