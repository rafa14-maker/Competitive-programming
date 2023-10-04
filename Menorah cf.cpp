#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   string s,t;
   cin>>s>>t;
   if(s==t)
   {
       cout << 0 << endl;
       return ;
   }
  if(count(s.begin(),s.end(),'1')==0||count(t.begin(),t.end(),'1')==0)
  {
      cout << -1 << endl;
      return ;
  }

  int a = count(s.begin(),s.end(),'0');
  int b = count(t.begin(),t.end(),'0');

  if(a!=b&&a+b!=n-1)
  {
      cout << -1 << endl;
      return ;
  }

  int dif = 0 , ans = 1 << 29;

  for(int i=0;i<n;i++)
  {
      if(s[i]!=t[i])dif++;
  }

  if(a==b)ans = dif;

  if(a+b==n-1)ans = min(ans,n-dif);

  if(ans == 1<<29)
  {
      cout << -1 << endl;
      return ;
  }

  cout << ans << endl;

}

int main()
{
    CherryFrog;
  int q;cin>>q;while(q--)solve();
 //  solve();
}

