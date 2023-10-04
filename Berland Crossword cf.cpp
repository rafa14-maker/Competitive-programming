#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,u,r,d,l;
    cin>>n>>u>>r>>d>>l;
    int a,b,c,e;
    a=u;
    b=d;
    c=l;
    e=r;
    int arr[n+5][n+5];
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)arr[i][j]=0;

    if(u>=1&&r>=1)
    {
        arr[0][n-1]=1;
        u--;
        r--;
    }

    if(d>=1&&l>=1)
    {
        arr[n-1][0]=1;
        d--;
        l--;
    }

    if(d>=1&&r>=1)
    {
        arr[n-1][n-1]=1;
        d--;
        r--;
    }

    if(u>=1&&l>=1)
    {
        arr[0][0]=1;
        u--;
        l--;
    }

    for(int j=1;j<=n-2;j++)
    {
        if(u>0)
        {
            arr[0][j]=1;
            u--;
        }
        if(d>0)
        {
            arr[n-1][j]=1;
            d--;
        }
    }


    for(int i=1;i<=n-2;i++)
    {
        if(r>0)
        {
            arr[i][n-1]=1;
            r--;
        }
        if(l>0)
        {
            arr[i][0]=1;
            l--;
        }
    }

    bool tr=true;

    int cnt=0,idx=0;

    for(int j=0;j<n;j++)
    {
        if(arr[0][j]==1)cnt++;
        if(arr[n-1][j]==1)idx++;
    }

    if(cnt!=a||idx!=b)tr=false;

   // cout<<cnt<<" "<<idx<<endl;

    cnt=0,idx=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i][0]==1)cnt++;
        if(arr[i][n-1]==1)idx++;
    }

    if(cnt!=c||idx!=e)tr=false;

   // cout<<cnt<<" "<<idx<<endl;

   // cout<<u<<d<<l<<r<<endl;

    if(tr)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
