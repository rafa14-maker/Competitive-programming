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
   int mx = arr[0];

   int cnt = 0 ;

   for(int i=1;i<n;i++)
   {
       cout<< arr[i]<<" "<<mx<<endl;
       cnt++;
       if(cnt == n/2)break;
   }

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

