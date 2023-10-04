#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   double arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   double sum = 0.0;
   for(int i=0;i<n;i++)sum+=arr[i];
   sum = sum / n;
   double cnt = 0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]>sum)cnt++;
   }
   double k = cnt / n ;
   k = k * 100.00;
   printf("%0.3lf%\n",k);
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

