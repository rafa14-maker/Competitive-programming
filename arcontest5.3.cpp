#include <stdio.h> 

void yo(int a,int b,int c)
{
	if(a>b&&a>c&&b>c)
	{
		printf("%d",b);
	}
	else if(a>b&&a>c&&b<c)
	{
		printf("%d",c);
	}
	else if(b>a&&b>c&&a>c)
	{
		printf("%d",a);
	}
	else if(b>a&&b>c&&a<c)
	{
		printf("%d",c);
	}
	else if(c>a&&c>b&&a>b)
	{
		printf("%d",a);
	}
	else if(c>a&&c>b&&b>a)
	{
		printf("%d",b);
	}
			 }             
int main()                        
{
  int t,i,a,b,c;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
    scanf("%d %d %d",&a,&b,&c);
    yo(a,b,c);
    printf("\n");
  }
   return 0;                       
}
