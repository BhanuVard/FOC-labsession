#include<stdio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	
	
	char name,sub;
    int  num;
	printf("enter name:\n");
	scanf("%s",&name);
	printf("enter marks\n");
	scanf("%d",&num);
	if(num==100)
	printf("s grade:%d",num);
	else if(num>=90)
	printf("A grade:%d",num);
	else if(num>=80)
	printf("b grade:%d",num);
	else if(num>=70)
	printf("c grade:%d",num);
	else if(num>=60)
	printf("d grade:%d",num);
	else if(num>=50)
	printf("e grade:%d",num);
	else if(num<50)
	printf("fail");
	return 0;
}
