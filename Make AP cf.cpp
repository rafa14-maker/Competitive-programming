#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first<b.first)return true;
    if(a.first == b.first &&a.second > b.second)return true;
    return false;
}

void solve()
{
   // cout<<"yes"<<endl;

   ll a,b,c;
   cin>>a>>b>>c;

   if(b-a == c-b)
   {
        cout<<"YES"<<endl;
          return ;
   }


  for(int i=1;i<=1e5+5;i++)
  {
      ll k = a*i;
      if(b-k == c-b)
      {
          cout<<"YES"<<endl;
          return ;
      }
      k = b*i;
      if(k-a == c-k )
      {
            cout<<"YES"<<endl;
          return ;
      }
      k = c*i;
      if(b-a == k-b)
      {
            cout<<"YES"<<endl;
          return ;
      }
  }
  cout<<"NO"<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

