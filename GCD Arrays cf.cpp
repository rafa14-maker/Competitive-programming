#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
  int l,r,k;
  cin>>l>>r>>k;

  if(k==0)
  {
      if(l==r&&l>1)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
      return ;
  }

  int idx = (r-l)/2;

  if(l%2==1||r%2==1)idx++;

  if(k>=idx)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

