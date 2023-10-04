#include<bits/stdc++.h>
using namespace std;

int n,k;

int frr[55];

void solve()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(frr[a]==0)frr[a]=i;
    }
    while(k--)
    {
        int a;
        cin>>a;
        cout<<frr[a]<<" ";
       // frr[a]=1;
        for(int i=1;i<=50;i++)
        {
            if(i!=a&&frr[i]!=0&&frr[i]<frr[a])frr[i]++;
        }
        frr[a]=1;
    }
}

int main()
{
    solve();
}
