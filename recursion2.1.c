#include<stdio.h>


int Number(int lowerLimit, int upperLimit)
{
    if(lowerLimit > upperLimit)
        return;
    
    printf("%d, ", lowerLimit);

    
Number(lowerLimit + 1, upperLimit);
}


int main()
{
	int a,b;
	scanf("%d %d",a,b);
	number(a,b);

}
