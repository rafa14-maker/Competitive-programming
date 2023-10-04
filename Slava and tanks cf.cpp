#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
     int n;
     cin>>n;

      if(n==2)
     {
         cout<<3<<endl;
         cout<<"2 1 2"<<endl;
     }
     else if(n==3)
     {
         cout<<4<<endl;
         cout<<"2 1 3 2"<<endl;
     }
     else
     {
         vector<int>v;

         for(int i=1;i<=n;i++)if(i%2==0)v.push_back(i);
         for(int i=1;i<=n;i++)if(i%2==1)v.push_back(i);
         for(int i=1;i<=n;i++)if(i%2==0)v.push_back(i);

         cout<<v.size()<<endl;

         for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
     }

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
    solve();
}

