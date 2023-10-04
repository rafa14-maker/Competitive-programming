#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;

  string s;
  cin>>s;

  map<char,int>mp;

  int idx = 0;

  for(int i=s.size()-1;i>=0;i--)
  {
      mp[s[i]]++;
      if(mp[s[i]]==1)
      {
          idx = i;

      }
  }


  for(int i=idx;i<s.size();i++)
  {
      cout<<s[i];
  }
  cout<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

