#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   ll n,m,k;
   cin>>n>>m>>k;
   ll arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];

   bool tr = true;

   for(int i=1;i<n;i++)
   {
       if(arr[i] == arr[i-1])
       {
           m+=min(k,arr[i-1]);
       }
       else if(arr[i] < arr[i-1])
       {
           ll op = arr[i-1]-arr[i];
           arr[i-1]-=op;
           m+=op+min(k,arr[i-1]);
       }
       else
       {
           if(abs(arr[i]-arr[i-1])-k>m)tr = false;
           else
           {
               if(k>=abs(arr[i]-arr[i-1]))m+=min(arr[i-1],k-abs(arr[i-1]-arr[i]));
               else m-=abs(arr[i]-arr[i-1])-k;
           }
       }
   }

   if(tr)cout << "YES" << endl;
   else cout << "NO" << endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

