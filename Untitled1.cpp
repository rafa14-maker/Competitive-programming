#include<stdio.h>

int main()
{
 int n,a,h,i,j,l=0,k=0,counter=0;
 scanf("%d",&n);
 int arr[n],frr[n];
 
 for(i=0;i<n;i++)
 {
 	for(j=0;j<2;j++)
 	{
 		if(j==0)
 		{
 			scanf("%d",&arr[k]);
 			k++;
		 }
		 else
		 {
		 	scanf("%d",&frr[l]);
		 	l++;
		 }
	 }
	 
 }
   for(i=0;i<n;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		if(arr[i]==frr[j])
   		{counter++;
		   }
	   }
   }
   printf("%d\n",counter);

	return 0;
}
