#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"hello"<<endl;
   int n;
   cin>>n;
  vector<int>odd;
  vector<int>even;
  for(int i=0;i<n;i++)
  {
      int a;
      cin>>a;
      if(a%2==0)even.push_back(a);
      else odd.push_back(a);
  }

  sort(odd.begin(),odd.end());
  sort(even.begin(),even.end());

  vector<int>v;
  for(int i=0;i<even.size();i++)
  {
      v.push_back(even[i]);
  }

  for(int i=0;i<odd.size();i++)
  {
      v.push_back(odd[i]);
  }

  int cnt=0;

  for(int i=0;i<n;i++)
  {
      for(int j=i+1;j<n;j++)
      {
          int kd = __gcd(v[i],2*v[j]);
          if(kd>1)cnt++;
      }
  }

  cout<<cnt<<endl;


}

int main()
{
    int q;cin>>q;while(q--)solve();
 // solve();
}

