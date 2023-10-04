#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int idx=1e7;
    for(int i=1;i<30000;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)sum+=abs(i-arr[j]);
        idx=min(idx,sum);
    }
    cout<<idx<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
