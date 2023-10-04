#include<stdio.h>
int main()
{
	long long  int i,n,sum=0;
	
	scanf("%lli",&n);
	
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			sum+=i;
		}
		else
		{
			sum-=i;
		}
	}
	printf("%lli\n",sum);
	
	return 0;
}
