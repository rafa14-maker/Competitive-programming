#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   map<string,int>mp;
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       string s;
       cin>>s;
       sort(s.begin(),s.end());
       if(mp[s]==0)mp[s]=a;
       else mp[s] = min(mp[s],a);
   }

   int sum = 1e8+7;

   if(mp["A"]!=0&&mp["B"]!=0&&mp["C"]!=0)
   {
       sum = min(sum,mp["A"]+mp["B"]+mp["C"]);
   }

    if(mp["AB"]!=0&&mp["AC"]!=0)
   {
       sum = min(sum,mp["AB"]+mp["AC"]);
   }

     if(mp["AB"]!=0&&mp["BC"]!=0)
   {
       sum = min(sum,mp["AB"]+mp["BC"]);
   }

     if(mp["BC"]!=0&&mp["AC"]!=0)
   {
       sum = min(sum,mp["BC"]+mp["AC"]);
   }

      if(mp["ABC"]!=0)
   {
       sum = min(sum,mp["ABC"]);
   }

     if(mp["BC"]!=0&&mp["A"]!=0)
   {
       sum = min(sum,mp["BC"]+mp["A"]);
   }

     if(mp["B"]!=0&&mp["AC"]!=0)
   {
       sum = min(sum,mp["B"]+mp["AC"]);
   }

     if(mp["AB"]!=0&&mp["C"]!=0)
   {
       sum = min(sum,mp["AB"]+mp["C"]);
   }


 if(sum!=1e8+7) cout<<sum<<endl;
 else cout<<-1<<endl;

}

int main()
{
  // int q;cin>>q;while(q--)solve();
   solve();
}
