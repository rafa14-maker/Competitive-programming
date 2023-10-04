#include<stdio.h>

void number(int a,int b);

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	number(a,b);
}

void number(int a, int b)
{
	if(a>b)
	{
	return;	
	}
	
	
	printf("%d ,",a);
	
	number(a+1,b);
}
