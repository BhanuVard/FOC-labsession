#include <stdio.h>

int main() {
    int n, sum=0, num;
    float avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &num);
        sum += num;
    }

    avg = (float)sum / n;
    printf("Sum of %d numbers is %d and average is %.2f", n, sum, avg);
    return 0;
}

