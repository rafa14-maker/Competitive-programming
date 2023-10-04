#include<stdio.h>
int main()
{
	int n,arr[10],frr[10],i,j,counter=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	frr[i]=0;
	}
	
	
	for(i=0;i<n;i++)
	{
//	for(j=0;j<n;j++)
	{
	  if(i%2==0)
	  {
	  	printf("%d",i);
	  }
	  
	}
	}

	
//	for(i=0;i<n;i++)
//	{
//		if(frr[i]==n)
//		{
//			printf("yes\n");
//		}
//		else
//		{
//			printf("no\n");
//		}
//	}
	return 0;

}
