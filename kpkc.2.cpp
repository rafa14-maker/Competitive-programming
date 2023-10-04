#include<stdio.h>

int prime(int x,int y,int z)
{int i;
	
  for(i=2;i<(x+y+z)/2;i++)
  {
  	if((x+y+z)%i==0)
  	{
  		prime(x,y,z+1);
	  }
	  else
	  {
	  	return x+y+z;
	  }
  }
	
	
	
}

int main()
{
	int x,y,t,i,z=1,u;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&x,&y);
	u=	prime(x,y,z);
	printf("%d",u);
	}
	
	return 0;
}
