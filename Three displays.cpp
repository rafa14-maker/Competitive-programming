#include<bits/stdc++.h>
using namespace std;

long long dp[3005];

long long arr[3005],frr[3005];

int min1(long long  a,long long  b)
{
    if(a<=b)return a;
    else return b;
}

int f(int pos,long long  cost ,int counter,int n)
{
    if(counter==3)
    {
        return cost;
    }
    if(pos>=n)return -1;

    if(dp[pos]!=-1)return dp[pos];

    long long ans=1e9;

    for(int i=pos+1;i<n;i++)
    {
        if(arr[i]>arr[pos])
        {
            ans=min1(ans,f(i,cost+frr[i],counter+1,n));
        }
    }
    return dp[pos]=ans;
}


int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>frr[i];

    sort(arr,arr+n);

    long long ans=1e18;

     memset(dp,-1,sizeof dp);

    for(int i=0;i<n-2;i++)
    {
        memset(dp,-1,sizeof dp);
       ans=min1(ans,f(i,frr[i],1,n));
    }
   if(ans!=1e9) cout<<ans<<endl;
   else cout<<-1<<endl;
}
