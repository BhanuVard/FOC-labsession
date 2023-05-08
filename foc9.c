#include<stdio.h>  
void main() {

    int m,n,o,t;
    printf("enter numbers:\n");
    scanf("%d%d%d",&m,&n,&o);
    t=m;
    m=n;
    n=o;
    o=t;
    
     printf("\nafter swapping is: %d %d %d",m,n,o);
     }

