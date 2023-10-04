#include<stdio.h>

int number(int a,int b);

int main()
{
	int a=1,b;
	scanf("%d",b);
	number(a,b);
	
	return 0;
}

void number(int a,int b)
{

	 if(a>b)
	{
		return;
	}
	
		printf("%d ,",a);
		number(a+1,b);
	
}
