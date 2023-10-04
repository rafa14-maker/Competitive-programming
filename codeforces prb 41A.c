#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100],frr[100],counter=0,n,k;
	
	int i,j;
	
	gets(arr);
	
	gets(frr);

	
	n=strlen(arr);
	
	j=strlen(frr);
	
	for(i=0,k=j-1;i<n,k>=0;i++,k--)
	{
	if(arr[i]!=frr[k])
	{
		counter++;
		}	
	}
   if(counter==0)
   {
   	printf("YES\n");
   }
   else
   {
   	printf("NO\n");
   }
	
return 0;	
}
