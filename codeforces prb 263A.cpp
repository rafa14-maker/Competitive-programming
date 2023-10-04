#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[5][5],i,j,a,b,counter=0;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]==1)
			{
				a=i;
				b=j;
			}
		}
	}
	
    while(1==1)
    {
    	if(a<2)
    	{
    		a++;
    		counter++;
		}
		else if(b<2)
		{
			b++;
			counter++;
		}
		else if(a==2&&b==2)
		{
			break;
		}
		else if(a>2)
		{
			a--;
			counter++;
		}
		else if(b>2)
		{
			b--;
			counter++;
		}
	}
	
	cout<<counter<<endl;

return 0;
}
