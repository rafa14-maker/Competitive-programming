#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int dp[N];
int coin[N];
int amount[N];
int used_coin[N];

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>coin[i];
        coin[i]=coin[i]%m;
        amount[coin[i]]++;
    }

    dp[0]=1;

    for(int i=1;i<=m;i++)
    {
        memset(used_coin,0,sizeof used_coin);
        {
            int f= amount[i];
            for(int j=i;j<=m;j++)
            {
                if(j-i>=0&&!dp[j]&&dp[j-i]&&used_coin[j-i]<f)
                {
                    used_coin[j]=used_coin[j-i]+1;
                    dp[j]=1;
                }
            }
        }
    }
    if(dp[m])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
