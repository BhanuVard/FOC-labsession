#include<stdio.h>
int main()
{
	int i,m,sum;
	printf("enter a number to generate seris");
	scanf("%d",&m);
	for(i=0;i<=m;i++)
	if(i%2==0)
	sum=sum+(i*i);
	printf("%d \n",i);
	return 0;
}
