#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

map<int,int>mp;
ll n,x,y;
ll arr[100005];
ll frr[100005];

void f(ll idx,int pos)
{
   // cout <<idx<<endl;
    if(mp[idx]==1)return ;
    if(pos == n)return ;
    mp[idx] = 1;
    f(idx ^ frr[pos],pos+1);
    f(idx+frr[pos],pos+1);
}

void solve()
{
   // cout<<"yes"<<endl;
  mp.clear();
   cin>>n>>x>>y;
   mp[y] = 0;

   ll p = x+3;

 ll sum = 0;

  for(int i=0;i<n;i++)cin>>arr[i],sum+=arr[i],frr[i] = arr[i];

 /* if( x+sum == y)
  {
      cout<<"Alice"<<endl;
      return ;
  } */

 // for(int i=1;i<n;i++)arr[i] +=arr[i-1];

  int mask = 0;

 /* for(int i = n-1;i>=0;i--)
  {
      mask ^= frr[i];
      ll sum1 = 0;
      if(i-1>=0)sum1 = arr[i-1];
      if(mask + x+sum1 == y)
      {
          cout<<"Alice"<<endl;
          return ;
      }
  }*/
  mask = 0;

  f(x,0);

  if(mp[y] == 1)
  {
      cout<<"Bob"<<endl;
          return ;
  }

cout <<"Alice"<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
   // solve();
}

