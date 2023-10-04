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
   int l = 0,r = 0;
   int cnt =0;
   while(l<n&&r<n)
   {
       while(arr[l]>=arr[r]&&r<n)
       {
           r++;
       }
       if(r==n)break;
       l++;
       cnt++;
       r++;
   }
   cout << cnt << endl;
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

