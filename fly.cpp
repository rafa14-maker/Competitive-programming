#include<stdio.h>
int main()
{
	int T,N,i,a,c;
	
	scanf("%d",&T);
	
	if(T<=1&&T<=1000)
	{
		for(i=0;i<T;i++)
		{
			scanf("%d",&N);
			a=N%10;
			
			while(N!=0)
			{
				N/=10;
			}
			c=N;
			printf("%d",a+c);
		}
	}
	
	return 0;
}
