#include<stdio.h>
int main()
{
	char arr[20];
	double a,b,d;
	gets(arr);
	scanf("%lf %lf",&a,&b);
	
	d=b*0.15;
	
	printf("TOTAL = R$ %.2lf\n",d+a);
	
	return 0;
}

