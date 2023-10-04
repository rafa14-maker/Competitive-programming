#include<bits/stdc++.h>
using namespace std;

int n,w,k;
int arr[150];

int dp[150][150];
int test;

int f(int pos,int mov)
{
    if(pos>=n||mov==k)return 0;

    int kp=0,i;
    for( i=0;i+pos<n;i++)
    {
        if(arr[pos]+w<arr[pos+i])
        {
            break;
        }
        kp++;
    }
    int ans=max(kp+f(pos+i,mov+1),f(pos+1,mov));

    return dp[pos][mov]=ans;
}

void solve()
{
   scanf("%d",&n);
   scanf("%d",&w);
   scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        int in;
        scanf("%d",&in);
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    memset(dp,-1,sizeof dp);
    printf("Case %d: %d\n",++test,f(0,0));
}

int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        solve();
    }
}
