#include<bits/stdc++.h>
using namespace std;

int arr[105],n;

int dp[105][400];

int check(string s)
{
    int counter=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0'&&i+1<s.size()&&s[i+1]=='1'&&i-1>=0&&s[i-1]=='1')counter++;
    }
    return counter;
}

int f(int pos,string s,int counter)
{
   // cout<<pos<<" "<<counter<<endl;
    if(pos==n)
    {
        if(check(s)==0)return counter;
        else return 99999;
    }
  // if(dp[pos][counter]!=-1)return dp[pos][counter];
    int ans=9999;
    if(arr[pos]==0)ans=f(pos+1,s+'0',counter);
    else
    {
       ans=min(f(pos+1,s+'1',counter),f(pos+1,s+'0',counter+1));
    }
    return dp[pos][counter]=ans;
}

int main()
{
    //int n;
    cin>>n;
   // int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    memset(dp,-1,sizeof dp);
    string s;
     cout<<f(0,s,0);
}
