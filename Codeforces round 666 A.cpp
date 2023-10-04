#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int frr[30];
   for(int i=0;i<30;i++)frr[i]=0;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       string s;
       cin>>s;
       for(int j=0;j<s.size();j++)
       {
           int a=(int)s[j]-'a';
         //  cout<<a<<endl;
           frr[a]++;
       }
   }
   for(int i=0;i<30;i++)
   {
       if(frr[i]%n!=0)
       {
           cout<<"NO"<<endl;
           return;
       }
   }
   cout<<"YES"<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
  //  solve();
}

