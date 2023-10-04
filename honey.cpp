#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,i,a,b,l=0,k=0;

	cin>>n;

	for(i=0;i<n;i++)
	{
	  cin>>a>>b;
	  l-=a;
	  	l+=b;
	  	if(l>k)
        {
         k=l;
        }
	}

	cout<<k<<endl;

	return 0;
}
