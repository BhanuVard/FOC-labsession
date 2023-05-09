#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    
    printf("The factorial of %d is %lld\n", n, fact);
    return 0;
}
