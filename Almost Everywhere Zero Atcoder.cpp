#include<bits/stdc++.h>
using namespace std;

string n;
int p;
int counter;
int dp[105][4];

int f(string s,int pos,int k)
{
   cout<<s<<" "<<k<<" "<<p<<endl;
    if(s>n)return 0;

    if(k==p&&pos==n.size())
    {
        if(s<=n)return 1;
        else return 0;
    }

    if(k>p)return 0;

      if(pos>=n.size())return 0;

       if(dp[pos][k]!=-1)return dp[pos][k];
       int ans=0;

    for(char i='1';i<='9';i++)
    {
        string frr;
        frr=s;

        frr[pos]=i;
        ans+=f(frr,pos+1,k+1);
    }
   // ans+=f(s,pos+1,k);
    return dp[pos][k]=ans;
}

int main()
{
    cin>>n;
    cin>>p;
    string s;
    for(int i=0;i<n.size();i++)s+='0';
   // counter=0;
    memset(dp,-1,sizeof dp);

    cout<<f(s,0,0)<<endl;
}
