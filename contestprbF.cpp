#include<bits/stdc++.h>
using namespace std;

void pri(int a)
{
	int i,counter=0;
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
			counter++;
		}
	}
	if(counter==3)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}

int main()
{
	 long long n,i,j,k;
	cin>>n;
    for(i=0;i<n;i++)
    {
    	cin>>j;
    if(j==4)
	{
		cout<<"YES"<<endl;
		}	
		else if(j%2==0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
		pri(j);
		}
    	
    
	}
	return 0;
   }
