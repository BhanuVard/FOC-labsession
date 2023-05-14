#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            sum += i * i;
        }
    }
    
    printf("The sum of squares of odd numbers up to %d is %d\n", n, sum);
    return 0;
}
