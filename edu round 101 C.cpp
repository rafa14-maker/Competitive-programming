#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin>>n;
  vector<pair<int,int> >v;
  int k=n;
  if(k%2==1)k--;
  for(int i=k;i>2;i--)
  {
    v.push_back(make_pair(i-1,i));
  }
  if(n%2==1)
  {
      v.push_back(make_pair(n,n-1));
  }
  if(n==3)
  {
       v.push_back(make_pair(n,n-1));
  }
  for(int i=k;i>2;i-=2)
  {
       v.push_back(make_pair(i,i-2));
  }
   for(int i=k;i>2;i-=2)
  {
       v.push_back(make_pair(i,i-2));
  }
  //cout<<90<<endl;
  cout<<v.size()<<endl;
  for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
}
