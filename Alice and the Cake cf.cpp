#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;

  int n;
  cin>>n;

  multiset<ll>mt;
  ll sum =0;

  for(int i=0;i<n;i++)
  {
      ll a;
      cin>>a;
      sum+=a;
      mt.insert(a);
  }
  vector<ll>v;
  v.push_back(sum);


  while(!mt.empty())
  {
      ll f = v.back();
      v.pop_back();
      if(mt.find(f) != mt.end())
      {
          mt.erase(mt.find(f));
          continue;
      }
     else if(f==1)break;
      else
      {
          ll a = f/2;
          ll b = f/2 + (f%2);
          v.push_back(a);
          v.push_back(b);
      }
  }


  if(v.size() == 0)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;


}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

/*
1
4
999999999 999999999 999999999 999999999

*/
