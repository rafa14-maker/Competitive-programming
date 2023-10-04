
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   ll arr[10];
   ll n = 7;

   for(int i=0;i<n;i++)cin>>arr[i];

   for(int i=0;i<n-1;i++)
   {
       if(arr[i]<arr[i+1])
       {
           cout<<-1<<endl;
           return ;
       }
   }

  if(abs(arr[0]-arr[n-1])<=1)cout<<1<<endl;
  else cout<<arr[0]-arr[n-1]<<endl;

}

int main()
{
    CherryFrog;
    //cout <<"All in!"<<endl;
   int q;cin>>q;while(q--)solve();
  //solve();
}

