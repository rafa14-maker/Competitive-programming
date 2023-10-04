#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
 string s;
 cin>>s;
 set<char>sk;
 for(int i=0;i<s.size();i++)sk.insert(s[i]);
 int n;
 cin>>n;
 int arr[n+5],frr[n+5];
 for(int i=0;i<n;i++)cin>>arr[i];
 set<int>sq;
 for(int i=0;i<n;i++)sq.insert(arr[i]);
 vector<char>v;
 for(auto it=sk.begin();it!=sk.end();it++)v.push_back(*it);

  map<int,char>mp;
  int idx=v.size()-1;

  for(auto it=sq.begin();it!=sq.end();it++)
  {
      mp[*it]=v[idx];
      idx--;
  }

  for(int i=0;i<n;i++)cout<<mp[arr[i]];
  cout<<endl;

}

int main()
{
    int q;cin>>q;while(q--)solve();

   // solve();
}

