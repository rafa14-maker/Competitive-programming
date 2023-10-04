#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,q;
    cin>>n>>m>>q;
    long long arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    while(q--)
    {
        long long p,k;
        cin>>p>>k;
        long long   pk = arr[k-1]*p;
         pk = pk%(2*(m+1)+1);

         cout<<pk<<endl;
    }
}

int main()
{
    //int q;
    //cin>>q;
   // while(q--)
   solve();
}
