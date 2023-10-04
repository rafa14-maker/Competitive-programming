#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int dp[N];
int coin[105];
int amount[105];
int used_coin[N];


int main()
{
    int q;
    cin>>q;
    int pq=0;
    while(q--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=1;i<=n;i++)cin>>coin[i];
        for(int i=1;i<=n;i++)cin>>amount[i];
        memset(dp,0,sizeof dp);
        dp[0]=1;
        for(int i=1;i<=n;i++)
        {
            memset(used_coin,0,sizeof used_coin);
            int c =  coin[i];
            int f = amount[i];

            for(int j=c;j<=m;j++)
            {
                if(!dp[j]&&j-c>=0&&used_coin[j-c]<f&&dp[j-c]==1)
                {
                    dp[j]=1;
                    used_coin[j]=used_coin[j-c]+1;
                }
            }
        }
        int counter=0;
        for(int i=1;i<=m;i++)if(dp[i]==1)counter++;
       printf("Case %d: %d\n",++pq,counter);
    }
}
