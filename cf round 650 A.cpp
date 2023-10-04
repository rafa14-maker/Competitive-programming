#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
  string s;
  cin>>s;
 for(int i=0;i<s.size();i++)
 {
     if(i==0)cout<<s[i];
     if(i%2==1)cout<<s[i];
 }
 cout<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();

   // solve();
}
