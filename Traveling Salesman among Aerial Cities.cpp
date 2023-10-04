#include<bits/stdc++.h>
using namespace std;

using ll=long long;
ll n,arr[20],frr[20],krr[20];

ll dp[(1<<20)+2];

bool Check(int n,int pos)
{
    return (n & (1<<pos));
}
int Set(int n,int pos)
{
    return (n | (1<<pos));
}


ll f(ll mask,bool tr,ll a,ll b,ll c,ll sum)
{
  //  cout<<mask<<" "<<sum<<endl;
    if(mask==(1<<(n))-1)
    {cout<<mask<<" "<<sum<<endl;
       sum+=abs(arr[0]-arr[a])+abs(frr[0]-frr[b])+max(0LL,krr[0]-krr[c]);
         return sum;
    }

    if(dp[mask]!=-1)return dp[mask];

     ll ans=1e18;
    if(tr)
    {
       for(int i=0;i<1;i++)
        {
                bool kp=false;
                sum+=abs(arr[i]-arr[a])+abs(frr[i]-frr[b])+max(0LL,krr[i]-krr[c]);
                ans=min(ans,f(Set(mask,i),kp,arr[i],frr[i],krr[i],sum));
        }
    }
     for(int i=1;i<n;i++)
        {
            if(!Check(mask,i))
            {
                bool kp=true;
                sum+=abs(arr[i]-arr[a])+abs(frr[i]-frr[b])+max(0LL,krr[i]-krr[c]);
                ans=min(ans,f(Set(mask,i),kp,arr[i],frr[i],krr[i],sum));
            }
        }
    return dp[mask]=ans;
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i]>>frr[i]>>krr[i];
    memset(dp,-1,sizeof dp);
    cout<<f(0,false,0,0,0,0)<<endl;
}
