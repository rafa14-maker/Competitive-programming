#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long sum=0;
    for(int i=n-1;i>=n-k;i--)
    {
        sum+=arr[i];
    }
    cout<<sum<<endl;
}
