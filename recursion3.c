#include<stdio.h>

void even(int a,int b);
void odd(int a,int b);

int main()
{
	int a,b;
		printf("enter uppercase :");
	scanf("%d",&a);
		printf("enter lowercase :");
	scanf("%d",&b);
	printf("even number :");
	even(a,b);
	printf("\nOdd number :");
	odd(a,b);
	
	return 0;
}
void even(int a,int b)
{
	if(a>b)
	return;
	
	else if(a%2==0)
	{
		printf("%d ,",a);
		even(a+1,b);
	}
	
	else
	even(a+1,b);
}
void odd(int a,int b)
{
	if(a>b)
	return;
	
	printf("%d ,",a);
	
	odd(a+2,b);

}
