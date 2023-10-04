#include<stdio.h>

int coffee(int a,int b);

int main()
{
	int a,b;
	scanf("%d %d",a,b);
	printf("sum = %d",coffee(a,b));
	
	return 0;
}
int coffee(int a,int b)
{
	if(a==b)
	{
		return 0;
	}

		return (a+coffee(a+2,b));
	

}
