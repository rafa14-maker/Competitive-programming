#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   int n;
   cin>>n;

   ll arr[n+5];
   ll frr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i],frr[i] = arr[i];


   for(int i=0;i<n;i++)
   {
       if(i-2>=0)arr[i]+=arr[i-2];
   }
   for(int i=n-1;i>=0;i--)
   {
       if(i-2>=0)frr[i-2]+=frr[i];
   }

   int cnt = 0;

   for(int i=0;i<n;i++)
   {
       ll sum1 =0;
       ll sum2 =0;
       if(i+1<n)sum1+=frr[i+1];
       if(i-2>=0)sum1+=arr[i-2];
       if(i-1>=0)sum2+=arr[i-1];
       if(i+2<n)sum2+=frr[i+2];
       if(sum1 == sum2)cnt++;
    //   cout << sum1 <<" "<<sum2<<endl;
   }

   cout << cnt << endl;

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
  solve();
}

