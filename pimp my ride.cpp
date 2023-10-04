#include<bits/stdc++.h>
using namespace std;

bool Check(int n,int pos)
{
    return (n & (1<<pos));
}
int Set(int n,int pos)
{
    return (n | (1<<pos));
}

int arr[20][20],n;
int dp[(1<<20)+5];

int f(int mask)
{
    if(mask==(1<<n)-1)return 0;
    if(dp[mask]!=-1)return dp[mask];

    int ans = 1<<28;

    for(int i=0;i<n;i++)
    {
        if(!Check(mask,i))
        {
            int price = arr[i][i];
            for(int j=0;j<n;j++)
            {
                if(Check(mask,j))price+=arr[i][j];
            }
            price+=f(Set(mask,i));
            ans=min(price,ans);
        }
    }
    return dp[mask]=ans;
}

int main()
{
    int q;
    cin>>q;
    for(int c=1;c<=q;c++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        memset(dp,-1,sizeof dp);
        printf("Case %d: %d\n",c,f(0));
    }
}
