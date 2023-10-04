#include<stdio.h>
#include<math.h>

int main()
{
	int t,n,i,j;
	
	scanf("%d",&t);
	if(t>=1&&t<=20)
	{
		for(i=0;i<t;i++)
		{
			scanf("%d",&n);
			j= sqrt(n);
			printf("%d\n",j);
		}
	}
	
	return 0;
}
