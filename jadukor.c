#include<stdio.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	int arr[a][2],frr[a];
	for(i=0;i<=a;i++)
	{
		int b,c;
		scanf("%d %d",&b,&c);
		frr[i]=b+c;
	}
	for(i=0;i<=a;i++)
	{
		printf("case %d : %d",i+1,frr[i]);
	}


return 0;
}
