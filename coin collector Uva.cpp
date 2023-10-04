#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;

    cin>>n;

    long long arr[n+5];

    long long sum=0,p=0;

    for(int i=0;i<n;i++)cin>>arr[i];

    sort(arr,arr+n);

    for(int i=0;i<n-1;i++)
    {
        if(sum+arr[i]<arr[i+1])
        {
            sum+=arr[i];
            p++;
        }
    }

   cout<<p+1<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
