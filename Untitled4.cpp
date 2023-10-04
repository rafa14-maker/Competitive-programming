#include <stdio.h>              
int main()                        
{
  int t,a[3],i,tmp;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
  	for(i=0;i<3;i++)
  	{
  		scanf("%d",&a[i]);
	  }
  	
  	
  		for (int i= 0; i<3;i++)                    
	{
			if (a[i] > a[i+1])                
			{
				int tmp = a[i+1];         
				a[i+1] = a[i];            
				a[i] = tmp;            
			}  
	}
  }
 
  
  	printf("%d",a[1]);
  
  
	return 0;                                       
}
