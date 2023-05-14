#include <stdio.h>

int main()
{
    int n, num,i,largest = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter integer %d: ", i);
        scanf("%d", &num);

        if (num > largest)
        {
            largest = num;
        }
    }

    printf("The largest integer is %d.\n", largest);

    return 0;
}

