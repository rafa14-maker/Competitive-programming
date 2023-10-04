#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
   string s;
   cin>>s;
   char c = 'z';
   int idx = -1;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]<=c)
       {
           c = s[i];
           idx = i;
       }
   }
   cout<<c<<" ";
   for(int i=0;i<s.size();i++)
   {
       if(i!=idx)cout<<s[i];
   }
   cout<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}

