#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   string s;
   cin>>s;

   bool tr = true;

   if(s.size()==1)
   {
       cout<<"NO"<<endl;
       return ;
   }

   for(int i=0;i<s.size()-1;i++)
   {
       if(s[i]>s[i+1])tr = false;
   }

   int len  = s.size()-1;

   if(tr&&s[len]==s[len-1])cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
  // solve();
}

