#include<bits/stdc++.h>
using namespace std;

const int N = 3005;

int frr[N][N];

void solve()
{
    int n,k;
    cin>>n>>k;

    fill(&frr[1][1],&frr[n][n],false);

    while(k--)
    {
        int a,b;
        cin>>a>>b;
        frr[a][b]=true;
        frr[b][a]=true;
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(!frr[i][j])continue;
            for(int k=j+1;k<=n;k++)
            {
                if(frr[j][k]&&frr[k][i])cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
