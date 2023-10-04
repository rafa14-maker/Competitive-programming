#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   int n,k;
   cin>>n>>k;

   string s;
   cin>>s;

  int pk = 0;

  for(int i=0,j=s.size()-1;i<s.size(),j>=0;i++,j--)
  {
      if(s[i]!=s[j])pk = 1;
  }

  if(k==0)cout <<1<<endl;
  else cout << pk+1<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
   // solve();
}

