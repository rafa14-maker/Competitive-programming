#include<bits/stdc++.h>
using namespace std;

long long arr[1005][4];
long long dp[1005][1005];
int n,m;

long long f(int pos,int counter,long long a,long long b,long long c)
{
    if(counter==0)
    {
        long long k=abs(a)+abs(b)+abs(c);
       return k;
    }
    if(pos==n)
    {
        return 0;
    }

   // if(dp[pos][counter]!=-1)return dp[pos][counter];

    int ans=0;
    ans=max(f(pos+1,counter-1,a+arr[pos][0],b+arr[pos][1],c+arr[pos][2]),f(pos+1,counter,a,b,c));
    return dp[pos][counter]=ans;
}

int main()
{
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
   }
   memset(dp,-1,sizeof dp);
   cout<<f(0,m,0,0,0)<<endl;
}
