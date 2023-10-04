#include<stdio.h>
int main()
{
int a;
double b;

scanf("%lf",&b);
printf("NOTES :\n");
a=b/100.00;
printf("%d note(s) de R$ 100.00 \n",a);
b=b-(a*100);

a=b/50.00;
printf("%d note(s) de R$ 50.00 \n",a);
b=b-(a*50);

a=b/20.00;
printf("%d note(s) de R$ 20.00 \n",a);
b=b-(a*20);

a=b/10.00;
printf("%d note(s) de R$ 10.00 \n",a);
b=b-(a*10);

a=b/5.00;
printf("%d note(s) de R$ 5.00 \n",a);
b=b-(a*5);

a=b/2.00;
printf("%d note(s) de R$ 2.00 \n",a);
b=b-(a*2);
printf("MOEDAS:\n");
a=b/1.00;
printf("%d moedas(s) de R$ 1.00 \n",a);
b=b-(a*1);

a=b/0.50;
printf("%d moedas(s) de R$ 0.50 \n",a);
b=b-(a*0.50);

a=b/0.25;
printf("%d moedas(s) de R$ 0.25 \n",a);
b=b-(a*0.25);

a=b/0.10;
printf("%d moedas(s) de R$ 0.10 \n",a);
b=b-(a*0.10);

a=b/0.05;
printf("%d moedas(s) de R$ 0.05 \n",a);
b=b-(a*0.05);

a=b/0.01;
printf("%d moedas(s) de R$ 0.01 \n",a);

return 0;
	}
