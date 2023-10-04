#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	b=a/365;
	a=a-(365*b);
	c=a/30;
	d=a-(c*30);
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",b,c,d);
	
	return 0;
}
