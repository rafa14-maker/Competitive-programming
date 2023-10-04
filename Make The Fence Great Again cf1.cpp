#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 3*1e5+5;

ll arr[N][3];
ll frr[N][3];
int n;

void solve()
{
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%lld %lld",&arr[i][0],&frr[i][0]);
        arr[i][1]=arr[i][0]+1;
        arr[i][2]=arr[i][1]+1;
        frr[i][1]=frr[i][0];
        frr[i][2]=frr[i][0]*2;
        frr[i][0]=0;
    }

    ll cnt =  1e18;

   for(int i=1;i<n;i++)
   {
      for(int j=0;j<3;j++)
      {
           ll sum = 1e18;
           if(arr[i-1][0]!=arr[i][j])sum=min(sum,frr[i-1][0]);
           if(arr[i-1][1]!=arr[i][j])sum=min(sum,frr[i-1][1]);
           if(arr[i-1][2]!=arr[i][j])sum=min(sum,frr[i-1][2]);
           frr[i][j]+=sum;
      }
   }

    for(int j=0;j<3;j++)
    {
        cnt=min(cnt,frr[n-1][j]);
    }
   cout<<cnt<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
