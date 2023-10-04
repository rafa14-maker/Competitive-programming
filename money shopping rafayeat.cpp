#include<bits/stdc++.h>
using namespace std;

int m,c;

int arr[25][25];

int dp[210][25];


int f(int n,int k)
{
    if(n<0)return -10000000;

    if(k==c)return m-n;

    if(dp[n][k]!=-1)return dp[n][k];

    int ans=-1;

    for(int i=1;i<=arr[k][0];i++)
    {
        ans=max(ans,f(n-arr[k][i],k+1));
    }

    return dp[n][k]=ans;
}


int main()
{
    int q;

    scanf("%d",&q);

    while(q--)
    {
        scanf("%d %d",&m,&c);

        for(int i=0;i<c;i++)
        {
            scanf("%d",&arr[i][0]);

            for(int j=1;j<=arr[i][0];j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }

        memset(dp,-1,sizeof dp);

        int k= f(m,0);

        if(k<0)printf("no solution\n");
        else printf("%d\n",k);
    }
}
