#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    
    printf("The sum of 1+2+3+...+%d is %d\n", n, sum);
    return 0;
}
