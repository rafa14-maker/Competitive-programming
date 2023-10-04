#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   string s;
   cin>>s;
   int n = s.size()-1;
   int k = (int)(s[n]-'0');

   if(k%2==0)
   {
       cout<<0<<endl;
       return ;
   }

   k = (int)(s[0]-'0');

   if(k%2==0)
   {
       cout<<1<<endl;
       return ;
   }

   bool tr=false;

   for(int i=0;i<s.size();i++)
   {
       int pk = (int)(s[i]-'0');
       if(pk%2==0)tr=true;
   }

   if(tr)cout<<2<<endl;
   else cout<<-1<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

