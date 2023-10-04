#include<stdio.h>
int main()
{
	int a,b,x,y;
	float c,z;
	
	scanf("%d %d %f %d %d %f",&a,&b,&c,&x,&y,&z);
	
	printf("VALOR A PAGAR: R$ %.2lf",(b*c)+(y*z));
	
	return 0;
	
}
