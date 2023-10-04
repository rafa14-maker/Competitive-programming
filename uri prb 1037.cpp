#include<stdio.h>
int main()
{
	float i;
	scanf("%f",&i);
	
	if(i>=0&&i<=25.0000)
	{
		printf("Intervalo [0,25]\n");
	}
	else if(i>25.0000&&i<=50.0000)
	{
		printf("Intervalo (25,50]\n");
	}
	else if(i>50.0000&&i<=75.00000)
	{
		printf("Intervalo (50,75]\n");
	}
	else if(i>75.0000&&i<=100.0000)
	{
		printf("Intervalo (75,100]\n");
	}
	else
	{
		printf("Fora de intervalo\n");
	}
	
	return 0;
}
