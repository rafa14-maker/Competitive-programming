#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   string s;
   cin>>s;

   int one =0,two=0;

   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='0')one++;
       else two++;
   }

   if(one==two)
   {
       cout<<one-1<<endl;
   }
   else cout<<min(one,two)<<endl;
}

int main()
{
    CherryFrog;
  int q;cin>>q;while(q--)solve();
 //  solve();
}

