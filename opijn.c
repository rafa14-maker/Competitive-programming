#include<stdio.h>
int main()
{
	int arr[10],i,a,b,c,frr[20],brr[10];
	scanf("%d %d",&a,&b);
    for(i=0;i<a;i++)
    {
    	scanf("%d",&arr[i]);
	}
	 for(i=0;i<b;i++)
    {
    	scanf("%d",&brr[i]);
	}
	int k=0,l=0;
	c=a+b;
	for(i=0;i<a;i++)
	{
		frr[i]==arr[i];
	}
	for(i=a+1;i<c;i++)
	{
		frr[i]==brr[k];
		k++;
	}
	  for(i=0;i<c;i++)
    {
    	printf("%d",frr[i]);
	}
	
	
	


	return 0;
}
