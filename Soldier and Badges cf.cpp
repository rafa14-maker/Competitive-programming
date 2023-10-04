#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
   int ans = 0;
   int idx = 0;
   map<int,int>mp;
   for(int i=0;i<n;i++)
   {
       if(mp[arr[i]]==0)
       {
           mp[arr[i]]=1;
       }
       else
       {
           for(int j=arr[i]+1;;j++)
           {
               if(mp[j]==0)
               {
                   ans+=abs(j-arr[i]);
                   mp[j]=1;
                   break;
               }
           }
       }
      // cout<<ans<<endl;
   }

    cout<<ans<<endl;
}

int main()
{
    solve();
}
