#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float average;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        int num;
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }
    
    average = (float) sum / n;
    printf("The sum of the numbers is %d and the average is %f\n", sum, average);
    
    return 0;
}
