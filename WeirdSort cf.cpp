#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=1;i<=n;i++)cin>>arr[i];
   vector<int>v;

   for(int i=1;i<=k;i++)
   {
       int a;
       cin>>a;
       v.push_back(a);
   }

   for(int idx=1;idx<=500;idx++)
   {
       for(int i=0;i<v.size();i++)
       {
           int a = v[i];
           int b = a+1;
           if(b<=n)
           {
               if(arr[a]>arr[b])swap(arr[a],arr[b]);
           }
       }
   }

   bool tr=true;

   for(int i=2;i<=n;i++)
   {
       if(arr[i]<arr[i-1])tr=false;
   }

   if(tr)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

}


int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

/*

1
4 2
4 1 2 3
3 2

*/
