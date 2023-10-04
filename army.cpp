#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n+5];

	for(int i=1;i<n;i++)cin>>arr[i];

	int l,r,sum=0;
	cin>>l>>r;

	for(int i=l;i<r;i++)
    {
        sum+=arr[i];
    }

    cout<<sum<<endl;
}
