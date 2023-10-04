#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

map<int,int>mp;

void solve()
{
   // cout<<"yes"<<endl;

   int a;
   cin>>a;

   mp.clear();

  // map<int,int>mp;

   for(int i=1;i<=a;i++)
   {
       int k = i;
       while(k>0)
       {
           int r= k%10;
           mp[r]++;
           k/=10;
       }
   }

   for(int i=0;i<9;i++)cout<<mp[i]<<" ";
   cout<<mp[9]<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;
   while(q--)
   {
       solve();
   }
 //  solve();
}

