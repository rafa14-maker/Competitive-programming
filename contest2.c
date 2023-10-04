#include<stdio.h>
int main()
{
	int s,i,t,sum=0;
	scanf("%d",&s);
	
	for(i=0;i<s;i++)
	{
		scanf("%d",&t);
		sum+=t;
	}
	printf("%d",sum);
	
	return 0;
	
}
