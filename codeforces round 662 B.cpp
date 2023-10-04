#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;

void solve()
{
  int n;
  cin>>n;
  int frr[N]={0};
  map<int,int>mp;
  map<int,int>kp;
  for(int i=0;i<n;i++)
  {
      int a;
      cin>>a;
      frr[a]++;
  }
   for(int i=1;i<N;i++)
   {
       if(frr[i]<=5)
       {
           mp[frr[i]]++;

       }
       else
       {
           mp[6]++;
       }
   }

   int q;
   cin>>q;
   while(q--)
   {
       char c;
       int k;
       cin>>c>>k;
       if(c=='+')
       {
           if(frr[k]<=5)
           {
               mp[frr[k]]--;
           }
           else if(frr[k]>5)
           {
               mp[6]--;
           }
           frr[k]++;
            if(frr[k]<=5)
           {
               mp[frr[k]]++;
           }
           else if(frr[k]>5)
           {
               mp[6]++;
           }
       }
       else
       {
           if(frr[k]<=5)
           {
               mp[frr[k]]--;
           }
           else if(frr[k]>5)
           {
               mp[6]--;
           }
           frr[k]--;
            if(frr[k]<=5)
           {
               mp[frr[k]]++;
           }
           else if(frr[k]>5)
           {
               mp[6]++;
           }
       }

       if(mp[4]>=2||mp[5]>=2||mp[6]>=2)cout<<"YES"<<endl;
       else if(mp[6]>=1&&mp[2]>=1||mp[6]>=1&&mp[3]>=1||mp[6]>=1&&mp[4]>=1||mp[5]>=1&&mp[6]>=1)cout<<"YES"<<endl;
       else if(mp[4]>=1&&mp[2]>=1&&mp[3]>=1||mp[4]>=1&&mp[5]>=1&&mp[3]>=1||mp[4]>=1&&mp[2]>=1&&mp[5]>=1)cout<<"YES"<<endl;
       else if(mp[4]>=1&&(mp[2]>=2||mp[3]>=2||mp[5]>=2))cout<<"YES"<<endl;
       else if(mp[5]>=1&&(mp[2]>=2||mp[3]>=2||mp[4]>=2))cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }
}


int main()
{
   // int q;cin>>q;while(q--)solve();

   solve();
}

