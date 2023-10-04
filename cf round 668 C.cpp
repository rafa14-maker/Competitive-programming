#include<bits/stdc++.h>
using namespace std;

int n,k;
string s;

const int N=3e5+5;
int dp[N];

int f(int pos,int odd,int even,int cnt)
{
  // cout<<pos<<" "<<odd<<" "<<even<<" "<<endl;

  if(pos>=k&&(odd!=even))return 0;



    if(pos==n)
    {
        if((odd==even))return 1;
        return 0;
    }

 //  if(pos-k+1>=0&&(odd+even)%2!=0)return 0;

    if(dp[pos]!=-1)return dp[pos];

    int ans=0;

    if(s[pos]=='?')
    {
        if(pos-k<0)
        {
            s[pos]='0';
          ans=max(ans,f(pos+1,odd+1,even,(odd+even)%100));
          s[pos]='1';
          ans=max(ans,f(pos+1,odd,even+1,(odd+even)%100));
           s[pos]='?';

        }
        else if(pos-k>=0)
        {
            char kp=s[pos-k];
            if(kp=='0')odd--;
            else even--;
            s[pos]='0';
            ans=max(ans,f(pos+1,odd+1,even,(odd+even)%100));
            s[pos]='1';
            ans=max(ans, f(pos+1,odd,even+1,(odd+even)%100));
            s[pos]='?';
        }
    }
    else
    {
        if(pos-k<0)
        {
            if(s[pos]=='0')ans=max(ans,f(pos+1,odd+1,even,(odd+even)%100));
            else if(s[pos]=='1') ans=max(ans,f(pos+1,odd,even+1,(odd+even)%100));
        }
        else if(pos-k>=0)
        {
            char kp=s[pos-k];
            if(kp=='0')odd--;
            else even--;
             if(s[pos]=='0')ans=max(ans,f(pos+1,odd+1,even,(odd+even)%100));
            else if(s[pos]=='1') ans=max(ans,f(pos+1,odd,even+1,(odd+even)%100));
        }
    }
    return dp[pos]=ans;
}

void solve()
{
    cin>>n>>k;
    cin>>s;
    memset(dp,-1,sizeof dp);
    if(f(0,0,0,0))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}

