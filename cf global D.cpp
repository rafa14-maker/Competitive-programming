#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int cnt=0;
   int frr[n+5]={0};
   for(int i=0;i<s.size();i++)
   {
      if(i==0)
      {
          if(s[i+1]=='L')frr[i]++;
          if(s[n-1]=='R')frr[i]++;
      }
      else if(i==s.size()-1)
      {
          if(s[0]=='L')frr[i]++;
          if(s[i-1]=='R')frr[i]++;
      }
      else
      {
          if(s[i-1]=='R')frr[i]++;
          if(s[i+1]=='L')frr[i]--;
      }
   }
   for(int i=0;i<n;i++)if(frr[i]==1)cnt++;
   cout<<cnt/2<<endl;
}
int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
