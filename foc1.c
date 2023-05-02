#include<stdio.h>
int main()
{
    int age;
    printf("enter age");
    scanf("%d",&age);
    if(age>=18)
    printf("eligible to vote :%d",age);
    else
    printf("not eligible to vote",age);
    printf("You have to wait for %d year,",18-age);
    return 0;
    }
