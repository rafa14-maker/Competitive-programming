#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   string s;
   cin>>s;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='?')
       {
           if(i==0)
           {
               if(i+1<s.size()){
               if(s[i+1]=='?'||s[i+1]=='0')s[i]='1';
               else s[i]='0';
               }
               else s[i] = '0';
           }
           else
           {
               if(s[i-1]=='0')s[i]='1';
               else s[i]='0';
           }
       }
   }


   ll sum = 0 ;
   int cnt = 1;

   for(int i=1;i<s.size();i++)
   {
      if(s[i]!=s[i-1])cnt++;
      else
      {
           ll kcnt = cnt*(cnt+1);
           kcnt = kcnt/2;
           sum += kcnt;
           cnt =1;
      }
   }

    ll kcnt = cnt*(cnt+1);
           kcnt = kcnt/2;
           sum += kcnt;
           cnt =1;

           cout << s << endl;

           cout << sum << endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

