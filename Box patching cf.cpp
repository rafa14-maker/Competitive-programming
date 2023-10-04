#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   sort(arr,arr+n);
   bool vis[n+5];
   for(int i=0;i<n;i++)vis[i] = true;

   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(vis[j]&&arr[i]<arr[j])
           {
               arr[i] = -1;
               vis[j] = false;
               break;
           }
       }
   }

   int cnt = 0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]>=0)cnt++;
   }
   cout<<cnt<<endl;
}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
   solve();
}

