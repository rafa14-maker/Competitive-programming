#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char arr[n+1][m+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
  int krr[n+1];
  for(int i=0;i<n;i++)krr[i]=0;

  for(int j=0;j<m;j++)
  {
      int k=0;
      for(int i=0;i<n;i++)
      {
          if(arr[i][j]>k)k=arr[i][j];
      }
        for(int i=0;i<n;i++)
      {
          if(arr[i][j]==k)krr[i]++;
      }
  }

  int sum=0;
  for(int i=0;i<n;i++)
  {
      if(krr[i]>0)sum++;
  }

  cout<<sum<<endl;
}
