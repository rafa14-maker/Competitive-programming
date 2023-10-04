#include<bits/stdc++.h>
using namespace std;

using ll=long long;

void solve()
{
    string s;
    cin>>s;
   ll ans=0,counter=0,flag=0;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='+')
       {
           counter++;
           flag++;
       }
       else
       {
           counter++;
           flag--;
           if(flag<0)
           {
               flag=0;
               counter+=(i+1);
           }
       }
   }
   cout<<counter<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
}
