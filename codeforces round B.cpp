#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    char arr[n+5][m+5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i][m-1]=='R')cnt++;
    }
    for(int j=0;j<m-1;j++)
    {
        if(arr[n-1][j]=='D')cnt++;
    }
    cout<<cnt<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}

