#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
      int n,m;
      cin>>n>>m;
      char arr[n+5][m+5];
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)arr[i][j]='B';
      }
      arr[n-1][m-1]='W';
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)cout<<arr[i][j];
          cout<<endl;
      }
    }
}
