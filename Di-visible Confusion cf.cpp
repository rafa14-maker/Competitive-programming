#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   ll arr[n+5];
   for(int i=1;i<=n;i++)cin>>arr[i];

    bool tr=true;

   for(int i=1;i<=n;i++)
   {
       bool fr = true;
       for(int j=1;j<=i;j++)
       {
           if(arr[i]%(j+1))
           {
               fr=false;
               break;
           }
       }
       if(fr)tr=false;
   }

    if(tr)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}

/*

1
6
9 4 7 15 36 49

*/

