#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll fun(priority_queue<int>v)
{
    ll sum = 0;
   int cnt = 0;
   while(!v.empty())
   {
       int f = v.top();
       v.pop();
       if(cnt%2==0)sum+=f;
       cnt++;
   }
   return sum ;
}

void solve()
{
   // cout<<"yes"<<endl;
     ll n,k;
     cin>>n>>k;

     ll arr[n+5];

     for(int i=0;i<n;i++)cin>>arr[i];

     int cnt  = 0;
     priority_queue<int>v;

     for(int i=0;i<n;i++)
     {
       v.push(arr[i]);
         ll pk =   fun(v);
        // cout << pk << endl;
         if(pk<=k)
         {
             cnt = max(cnt,i+1);
         }
     }

     cout<< cnt<<endl;

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}
