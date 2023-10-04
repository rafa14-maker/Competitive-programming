#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int frr[1005]={0};
    for(int i=2;i<=1000;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]%i==0)frr[i]++;
        }
    }
    int idx=0,px=0;
    for(int i=2;i<=1000;i++)
    {
        if(frr[i]>idx)
        {
            idx=frr[i];
            px=i;
        }
        else if(frr[i]==idx)
        {
            px=max(px,i);
        }
    }
    cout<<px<<endl;
}

int main()
{
    solve();
}
