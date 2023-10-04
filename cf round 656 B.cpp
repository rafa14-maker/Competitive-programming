#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
   int n;
   cin>>n;
   int arr[n*2+5];
   for(int i=0;i<n*2;i++)cin>>arr[i];
   map<int,int>mp;
   vector<int>v;
   for(int i=0;i<n*2;i++)
   {
       if(mp[arr[i]]==0)
       {
           mp[arr[i]]=1;
           v.push_back(arr[i]);
       }
   }
   for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
   cout<<endl;
}

int main()
{
     FasterIO

    int q;cin>>q;while(q--)solve();

   // solve();
}

