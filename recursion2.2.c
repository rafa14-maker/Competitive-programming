#include<stdio.h>

void coffee(int a,int b);

int main()
{
	int a,b;
	printf("enter uppercase :");
	scanf("%d",&a);
		printf("enter lowercase :");
	scanf("%d",&b);
	
	coffee(a,b);
	
	return 0;
	
}

void coffee(int a,int b)
{
	if(a>b)
	return ;
	
	printf("%d ,",a);
	coffee(a+1,b);
}
