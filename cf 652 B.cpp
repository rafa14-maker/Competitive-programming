#include<bits/stdc++.h>
using namespace std;

using ll=long long;

void solve()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  while(1)
  {
      bool tr=true;
      int l=0,r=0;
      for(int i=0;i<s.size();i++)
      {
         if(s[i]=='1'&&s[i+1]=='0')
         {
               if(i+2<s.size()&&s[i+2]=='0')
             {
                 s[i+1]='9';
                 tr=false;
                 break;
             }
            else if(i-1>=0&&s[i-1]=='1')
             {
                 s[i]='9';
                 tr=false;
                break;
             }

             else
             {
                 s[i]='9';
                 tr=false;
                break;
             }
         }
      }
      if(tr)break;
      string frr;
      for(int i=0;i<s.size();i++)if(s[i]!='9')frr+=s[i];
      s=frr;
  }
  cout<<s<<endl;
}

int main()
{
int q;cin>>q;while(q--)solve();

  //  solve();
}
