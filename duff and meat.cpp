#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    int arr[n+5],frr[n+5];

    for(int i=0;i<n;i++)cin>>arr[i]>>frr[i];

    for(int i=1;i<n;i++)
    {
        frr[i]=min(frr[i],frr[i-1]);
    }

    long long sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=(arr[i]*frr[i]);
    }
    cout<<sum<<endl;
}
