#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
 //   cout<<"yes"<<endl;
 int n;
 cin>>n;
 string s,f;
 cin>>s>>f;
 bool tr= true;
 for(int i=0;i<s.size();i++)
 {
     if(s[i]=='1'&&f[i]=='1')tr=false;
 }
 if(tr)cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   //solve();
}

