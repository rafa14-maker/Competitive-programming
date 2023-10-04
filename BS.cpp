#include<bits/stdc++.h>
using namespace std;

long long n;
string s;

int dp[70][70];
long long Set(long long n,int pos)
{
    return (n | (1<<pos));
}

int f(int pos,int counter,long long mask)
{
//cout<<mask<<endl;

   if(pos==s.size())return 1e8;

  if(mask>n)return counter-1;
  if(mask==n)return counter;

  if(dp[pos][counter]!=-1)return dp[pos][counter];

   int ans=1e7;
   if(s[pos]=='0')
   {
       ans=min(ans,f(pos+1,counter+1,mask));
       ans=min(ans,f(pos+1,counter,mask));
   }
   else if(s[pos]=='1')
   {
       ans=min(ans,f(pos+1,counter+1,Set(mask,counter)));
       ans=min(ans,f(pos+1,counter,mask));
   }
   return dp[pos][counter]=ans;
}

int main()
{
    cin>>n>>s;
  reverse(s.begin(),s.end());
  memset(dp,-1,sizeof dp);
  cout<<s.size()-f(0,0,0)<<endl;
}
