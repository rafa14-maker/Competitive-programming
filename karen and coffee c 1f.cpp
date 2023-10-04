#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 2e6+5;
int frr[N];
int arr[N];

void solve()
{
   // cout<<"yes"<<endl;
   int n,k,q;
   cin>>n>>k>>q;
   for(int i=0;i<n;i++)
   {
       int a,b;
       cin>>a>>b;
       frr[a]++;
       frr[b+1]-=1;
   }
   for(int i=1;i<N;i++)frr[i] += frr[i-1];

   for(int i=1;i<N;i++)
   {
       if(frr[i]>=k)arr[i]++;
   }

   for(int i=1;i<N;i++){arr[i] += arr[i-1];}

   while(q--)
   {
       int a,b;
       cin>>a>>b;
       cout<<arr[b] - arr[a-1]<<endl;
   }
}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
   solve();
}

