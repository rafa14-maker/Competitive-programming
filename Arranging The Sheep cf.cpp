#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
    // i was not able to solve
    // i watched tutorial

   int n;
   cin>>n;

   string s;
   cin>>s;

   int cnt = 0 ;

   for(int i=0;i<s.size();i++)
   {
       if(s[i] == '*')cnt++;
   }

   int idx = -1, pdx = -1;

   for(int i=0;i<s.size();i++)
   {
       if(s[i] == '*')
       {
           pdx ++;
           if(pdx == cnt/2)
           {
               idx = i;
           }
       }
   }

   ll ans = 0;
   pdx = idx - cnt/2;

   for(int i=0;i<s.size();i++)
   {
       if(s[i] == '*')
       {
           ans += abs(pdx - i);
           pdx ++;
       }
   }

   cout<<ans<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

