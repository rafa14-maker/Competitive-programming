#include<stdio.h>
#include<math.h>

double power(double a, double b)
{
	if(b==0)
	{
		return 1;
	}
	else if(b>0)
	{
		return a*pow(a,b-1);
	}
	else 
	{
		return 1/pow(a,-b);
	}
}

int main()
{
	double a,b,c;
	scanf("%lf %lf",&a,&b);
	c=power(a,b);
	printf("\n %.2lf",c);
	
	return 0;
}
