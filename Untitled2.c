#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of two numbers : ");
    scanf("%d %d",&a,&b);

    c=lcm(a,b);

    printf("\nthe lcm of %d and %d is %d \n",a,b,c);

    return 0;

}
int lcm (int a, int b)
{
    int i,j;

    if(a>b)
    {
        for(i=a;;i++)
        {
            if(i%a==0&&i%b==0)
            {
                j=i;
                break;
            }
        }
    }
     if(a<b)
    {
        for(i=b;;i++)
        {
            if(i%a==0&&i%b==0)
            {
                j=i;
                break;
            }
        }
    }
    return j;
}
