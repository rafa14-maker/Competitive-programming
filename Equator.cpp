#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    long long sum=0;
    for(int i=0;i<n;i++)cin>>arr[i],sum+=arr[i];

    long long flag=0;
    for(int i=0;i<n;i++)
    {
        flag+=arr[i];
        if(flag>=sum-flag)
        {
            cout<<i+1;
            return 0;

        }
    }
}
