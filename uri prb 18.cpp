#include<stdio.h>
int main()
{
	int a,b,c,d;
    scanf("%d",&a);
   b= a%60;
    a=(a-b)/60;
    c=a%60;
    a=(a-c)/60;
    d=a%60;
    printf("%d:%d:%d\n",d,c,b);
	
	return 0;
	
}
