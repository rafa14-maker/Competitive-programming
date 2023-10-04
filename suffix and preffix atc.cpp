#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;

  int n,m;
  cin>>n>>m;

  string a,b;
  cin>>a>>b;

  bool tr = true, fr = true;

  for(int i=0;i<n;i++)
  {
      if(a[i] != b[i])
      {
          tr = false;
          break;
      }
  }

  for(int i=n-1,j=m-1;i>=0;i--,j--)
  {
      if(a[i]!=b[j])
      {
          fr = false;
          break;
      }
  }

  if(tr && fr)cout<<"0"<<endl;
  else if(tr)cout<<"1"<<endl;
  else if(fr)cout<<"2"<<endl;
  else cout<<"3"<<endl;

}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
  solve();
}
