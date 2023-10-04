#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
   string s;
   cin>>s;
   string fk = s;
   string pk = s;
   for(int i=0;i<s.size();i++)
   {
       string f;
       for(int j=i;j<s.size();j++)f+=s[j];
       for(int j=0;j<i;j++)f+=s[j];
       if(fk>f)fk = f;
       if(pk<f)pk = f;
   }
   cout<<fk<<endl;
   cout<<pk<<endl;
}

int main()
{
  // int q;cin>>q;while(q--)solve();
   solve();
}

