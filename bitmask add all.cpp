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

vector<int>v;
int n;

int dp[(1<<20)+2];
int call(int mask)
{
   if(mask == (1<<n)-1)
        return 0;
   if(dp[mask]!=-1)return dp[mask];

   int ans=1e8;

   for(int i=0;i<v.size();i++)
   {
       if(!Check(mask,i))
       {
           int sum=0,flag=0;
           vector<int>p;
           for(int i=0;i<v.size();i++)
           {
               if(Check(mask,i))
               {
                   sum+=v[i];
               }
           }
           sum+=call(Set(mask,i));
           ans=min(ans,sum);
       }
   }
   return dp[mask]=ans;
}

int main()
{
   // int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
}
