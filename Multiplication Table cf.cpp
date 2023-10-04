#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a,ll b)
{
    if(a==0)
    {
        return b;
    }
    else{
        return gcd(b%a,a);
    }
}

void solve()
{
    int n;
    cin>>n;

    ll arr[n+5][n+5];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cin>>arr[i][j];
    }
   // vector<int>v;

      ll g = sqrt((arr[0][1]*arr[0][2])/arr[1][2]);

      cout<<g<<" ";

      for(int i=1;i<n;i++)
      {
          cout<<arr[0][i]/g<<" ";
      }

      cout<<endl;

}

int main()
{
  solve();
}
