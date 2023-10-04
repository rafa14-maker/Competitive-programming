#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    long long sum=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            sum+=(arr[i]/2);
        }
        else sum+=arr[i];
    }
    cout<<sum<<endl;
}
