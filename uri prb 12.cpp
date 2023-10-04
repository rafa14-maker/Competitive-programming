#include<stdio.h>
int main()
{
	double a,b,c,pi=3.14159,k;
	scanf("%lf %lf %lf",&a,&b,&c);
	k=1.00/2;
	
	printf("TRIANGULO : %.3lf\nCIRCULO : %.3lf\nTRAPEZIO : %.3lf\nQUADRADO : %.3lf\nRETANGULO : %.3lf\n",k*a*c,pi*c*c,k*(a+b)*c,b*b,a*b);
return 0;

}
