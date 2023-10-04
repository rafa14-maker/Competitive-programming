#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long k;
    cin>>k;
    long long arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        long long p = arr[i]-arr[0];
        if(p%k!=0)
        {
            flag=false;
        }
    }
    if(!flag)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        long long p=arr[i]-arr[0];
        sum+=(p/k);
    }
    cout<<sum<<endl;
}
