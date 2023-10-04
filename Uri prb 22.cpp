#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x,y,D;
	
	scanf("%f %f %f",&a,&b,&c);
	D=b*b-(4*a*c);
	
	if(D<0&&a==0)
	{
		printf("Impossivel calcuar\n");
	}
	else
	{
		x=(-b-sqrt(D))/(2*a);
		y=(-b+sqrt(D))/(2*a);
		printf("R1 = %f\nR2 = %f\n",y,x);
	}
    
	 return 0;
}
