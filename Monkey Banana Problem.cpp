#include<bits/stdc++.h>
using namespace std;

int main()
{
  int q;
  cin>>q;
  for(int v=1;v<=q;v++)
  {
    int n;
    cin>>n;
    int arr[2*n+5][2*n+5];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cin>>arr[i][j];
        }
    }
    int k=n-1;
    for(int i=n+1;i<=2*n-1;i++)
    {
        for(int j=1;j<=k;j++)
        {
            cin>>arr[i][j];
        }
        k--;
    }

        for(int i=2;i<=n;i++)
        {
        for(int j=1;j<=i;j++)
        {
          if(j==1)arr[i][j]+=arr[i-1][j];
          else if(i==j)arr[i][j]+=arr[i-1][j-1];
          else
          {
              arr[i][j]=max(arr[i][j]+arr[i-1][j],arr[i][j]+arr[i-1][j-1]);
          }
         } }
         k=n-1;
    for(int i=n+1;i<=2*n-1;i++)
    {
        for(int j=1;j<=k;j++)
        {
            arr[i][j]=max(arr[i][j]+arr[i-1][j],arr[i][j]+arr[i-1][j+1]);
        }
        k--;
    }
    printf("Case %d: %d\n",v,arr[2*n-1][1]);
  }
}
