#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   ll arr[3];
   cin>>arr[0]>>arr[1]>>arr[2];

   sort(arr,arr+3);

   if(arr[0]==arr[2])
   {
       if(arr[0]%2==0)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       return ;
   }

   if(arr[0]==arr[1])
   {
       if(arr[2]%2==0)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       return ;
   }
   if(arr[1]==arr[2])
   {
       if(arr[0]%2==0)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       return ;
   }

   if(arr[2]==arr[0]+arr[1])
   {
       cout<<"YES"<<endl;
       return ;
   }

    cout << "NO" << endl;
}

int main()
{
    CherryFrog;
    //cout <<"All in!"<<endl;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

