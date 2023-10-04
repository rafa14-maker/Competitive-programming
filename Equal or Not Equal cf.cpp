#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   string s;
   cin>>s;
   int n = s.size();
   int arr[n+5];

   int idx = 0;
   arr[0] = 1;

  int cnt = 0 ;

  for(int i=0;i<s.size();i++)
  {
      if(s[i]=='N')cnt++;
  }

  if(cnt == 1)cout <<"NO"<<endl;
  else cout <<"YES"<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

