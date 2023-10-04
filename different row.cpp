#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    for(int i=n-2;i>=0;i--)
    {
        sum+=(arr[i]-arr[i-1]);
    }

    cout<<sum<<endl;
}
