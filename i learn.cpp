#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,great=1,counter=1;
	cin>>n;
	int arr[n];

	for(i=0;i<n;i++)
	{	cin>>arr[i];
		if(arr[i]>0)
		{
			if(arr[i]>=arr[i-1])
			{
				counter++;
				great=max(great,counter);
			}
			else
			{
				counter=1;
			}
		}
	}
	cout<<great<<endl;
}
