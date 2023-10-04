#include<bits/stdc++.h>
using namespace std;

int n;
char arr[]={'A','C','G','T'};

long long mod = 1e9+7;

long long dp[105];

long long f(int pos,string s)
{
 if(s.size()>=3)
 {
    int len =s.size();
    char frr[3];
    frr[0]=s[len-1];
    frr[1]=s[len-2];
    frr[2]=s[len-3];
    sort(frr,frr+3);
    if(frr[0]=='A'&&frr[1]=='C'&&frr[2]=='G')return 0;
 }
 if(s.size()==n)
 {
    // cout<<s<<endl;
     return 1;
 }
 //if(dp[pos]!=-1)return dp[pos];

   string f1=s;

   long long ans=0;
 for(int i=0;i<4;i++)
 {

    ans+= f(pos,f1+arr[i]);
   // ans+= f(pos+1,f1);
 }
// ans+=f(pos+1,s);
  return ans;
}

int main()
{
    cin>>n;
    memset(dp,-1,sizeof dp);
    string k;
   cout<<f(0,k);
}
