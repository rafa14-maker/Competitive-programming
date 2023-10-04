#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   string s;
   cin>>s;
   string f;
   cin>>f;

   int four =0 ,seven =0;

   for(int i=0;i<s.size();i++)
   {
       if(s[i]!=f[i])
       {
           if(s[i] == '4')four++;
           else seven++;
       }
   }

   cout<< max(four,seven) <<endl;

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
  solve();
}

