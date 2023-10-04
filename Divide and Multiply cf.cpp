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
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int cnt = 0;
   for(int i=0;i<n;i++)
   {
       while(arr[i]%2==0)
       {
           cnt++;
           arr[i] /= 2;
       }
   }
   sort(arr,arr+n);
   arr[n-1] = arr[n-1] * pow(2,cnt);
   ll sum = 0;
   for(int i=0;i<n;i++)sum+=arr[i];
   cout << sum << endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

