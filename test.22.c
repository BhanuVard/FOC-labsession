#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping, the value of a is %d and the value of b is %d\n", a, b);

    return 0;
}

