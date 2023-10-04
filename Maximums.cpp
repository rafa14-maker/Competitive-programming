#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    long long sum=0;
    for(int i=0;i<n;i++)
    {

        cout<<sum+arr[i]<<" ";
        sum=max(sum,sum+arr[i]);
    }
    cout<<endl;
}
