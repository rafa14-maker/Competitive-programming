#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int h,w,n;

void solve()
{
  cin>>h>>w>>n;

  vector<pair<ll,int> >v1;
  vector<pair<ll,int> >v2;

  for(int i=0;i<n;i++)
  {
      ll a,b;
      cin>>a>>b;
      v1.push_back(make_pair(a,i));
      v2.push_back(make_pair(b,i));
  }

  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end());

  int arr[n+5][2];

  for(int i=0;i<v1.size();i++)
  {
      int a = v1[i].second;
      arr[a][0] = i+1;
  }

  for(int i=0;i<v2.size();i++)
  {
      int a = v2[i].second;
      arr[a][1] = i+1;
  }

  for(int i=0;i<n;i++)
  {
      cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
  }

}

int main()
{
    solve();
}

