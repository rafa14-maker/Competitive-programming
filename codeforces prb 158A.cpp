#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,k,arr[55],counter=0;
	
	cin>>n;
	
	cin>>k;
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	for(i=0;i<n;i++)
	{
	  if(arr[i]>=arr[k-1]&&arr[i]>0)
	  {
	  	counter++;
	  }
    }
	cout<<counter<<endl;
	
	return 0;
}
