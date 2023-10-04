#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
  while(k--)
  {
      int a,b;
      cin>>a>>b;
       int i,j;
       bool tr=false;
      for(int i=0;i<a-1;i++)
      {
          if(s[i]==s[a-1])
          {
              tr=true;
              break;
          }
      }
      if(!tr)
      {
        for(int i=b;i<s.size();i++)
      {
          if(s[i]==s[b-1])
          {
              tr=true;
              break;
          }

      }
      }
      if(tr)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
      }
  }



int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
