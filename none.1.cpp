#include<stdio.h>
int main()
{
	int arr[100],n,k,counter=0,i;
	scanf("%d %d",&n,&k);
	
	if(1<=k&&k<=n&&n<=50)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
	}
	for(i=0;i<n;i++)
		{
			if(arr[i]>=arr[k]&&arr[i]>=0&&arr[i]<=100&&arr[i]>=arr[i+1]&&arr[i]>0)
			{
				counter++;
			}
		}
		printf("%d\n",counter);
		
		return 0;
	
}
