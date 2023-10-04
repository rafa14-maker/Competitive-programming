#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int  n,a,b;
   cin>>n>>a>>b;

   string s;cin>>s;

   if(s[a-1]==s[b-1])
   {
       cout<<0<<endl;
       return ;
   }
   cout<<1<<endl;
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
  solve();
}

