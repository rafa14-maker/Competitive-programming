#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int arr[500];
int frr[500];


void solve()
{
   // cout<<"yes"<<endl;
   int n,l,k;
   cin>>n>>l>>k;
   for(int i=1;i<=n;i++)cin>>arr[i];
   arr[n+1] = l;
   n++;

   for(int i=1;i<n;i++)cin>>frr[i];

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

