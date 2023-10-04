#include<stdio.h>
int main()
{
	float a,b,c,d,x,y,k;
	
	scanf("%f %f %f %f ",&a,&b,&c,&d);
	
	x=(a+b+c+d)/4;
	
	printf("Media: %.1f\n",x);
	
	if(x>=7.0)
	{
		printf("Aluno aprovado\n");
	}
	
	 if(x<5.0)
	{
		printf("Aluno reprovado\n");
	}
	
	 if(x>=5.0&&x<=6.0)
	{
		printf("Aluno em exame\n");
		scanf("%f",&y);
		printf("Nota do exame: %.1f\n",y);
	k=(y+x)/2;
	if(k>=5.0)
	{
		printf("Aluno aprovado\n");
	}
	else if(k<=4.9)
	{
		printf("Aluno reprovado\n");
	}
	printf("Media final: %.1f\n",k);
	}
	
	return 0;
	
}
