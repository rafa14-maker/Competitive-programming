#include<stdio.h>
int main()
{
	int n,i,j;
	
	scanf("%d",&n);
	
	int arr[10];
	arr[0]=0;
	if(n>=1&&n<=90)
	{
		for(i=1;i<=n;i++)
		{
			scanf("%d",&arr[i]);
		}
	}
	for(i=0;i<=n;i++)
	{
		if(arr[i]+15<arr[i+1])
		{
			printf("%d\n",arr[i]+15);
			break;
		}
	  else if(i==n)
	  {
	  	if(arr[i]+15>90)
	  	{
	  		printf("%d",arr[i]);
		  }
		  else
		  {
		  	printf("%d\n",arr[i]);
		  }
	  }
	  
	}
	
	return 0;
}
