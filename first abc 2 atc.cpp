#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;

  int n;
  cin>>n;

  string s;
  cin>>s;

  for(int i=0;i<s.size();i++)
  {
      if(i+1<n&&i+2<n&&s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='C')
      {
          cout<<i+1<<endl;
          return ;
      }
  }
  cout<<-1<<endl;
}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
  solve();
}

