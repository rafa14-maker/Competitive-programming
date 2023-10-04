#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;

    int arr[n+5][n+5];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>arr[i][j];
        }
    }
   int frr[n+5];
    for(int i=0;i<n-1;i++)
    {
       frr[i]=i+2;
    }
     long long sum=0;
    do
    {
       // cout<<10<<endl;

       long long pk=arr[1][frr[0]];
       for(int i=0;i<n-2;i++)
       {
          // cout<<10<<endl;
           pk+=arr[frr[i]][frr[i+1]];
       }
       pk+=arr[frr[n-2]][1];
      // cout<<pk<<endl;
       if(pk==k)sum++;
    }while(next_permutation(frr,frr+n-1));

    cout<<sum<<endl;

}

int main()
{
    solve();
}
