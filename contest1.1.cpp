#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,sum=0;
	scanf("%d",&n);

	while(i<=n)
	{
		sum+=(pow(-1,i)*i);
		i++;
	}
	
	printf("%d\n",sum);
	
	return 0;
}
