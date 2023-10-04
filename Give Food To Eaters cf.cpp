#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
   int n,m;
   cin>>n>>m;
   int arr[m+5];
   for(int i=0;i<m;i++)cin>>arr[i];
   sort(arr,arr+m);
   if(n==m)
   {
       cout<<arr[m-1]<<endl;
       return ;
   }

   int k = n/m;
   int cnt = n%m;

   int mx = 0 ;

   for(int i=m-1;i>=0;i--)
   {
       int a= 0 ;
       if(cnt>0)a=1,cnt--;
       mx = max(mx, arr[i]/k +a);
   }

   cout<<mx<<endl;

}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}

