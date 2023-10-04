#include<stdio.h>
int coffee(int a,int b);
int main()
{
	int a,b;
			printf("enter uppercase :");
	scanf("%d",&a);
		printf("enter lowercase :");
	scanf("%d",&b);
	
	printf("%d",coffee(a,b));

}
int coffee(int a,int b)
{
	
if(a==b)
{
	return a;
}
else
{
return a+coffee(a+1,b);
}
	
}


