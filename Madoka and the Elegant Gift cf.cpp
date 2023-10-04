#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;
  int n,m;
  cin>>n>>m;

  bool tr = true;

  char arr[n+5][m+5];
  int frr[n+5][m+5];

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          cin>>arr[i][j];
          frr[i][j]=0;
          if(arr[i][j]=='1')frr[i][j]=1;
      }
  }

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
         if(j-1>=0&&frr[i][j]>0&&frr[i][j-1]>0)
         {
             frr[i][j] = frr[i][j-1]+1;
         }
      }
  }

  for(int i=0;i<n;i++)
  {
      for(int j=m-1;j>=0;j--)
      {
         if(j+1<m&&frr[i][j+1]>frr[i][j]&&frr[i][j]>0)
         {
             frr[i][j] = frr[i][j+1];
         }
      }
  }


  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
         if(i+1<n&&frr[i][j]!=frr[i+1][j]&&frr[i][j]>0&&frr[i+1][j]>0)tr = false;
      }
  }


   for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
        frr[i][j] = 0;
        if(arr[i][j]=='1')frr[i][j]=1;
      }
  }
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
         if(i-1>=0&&frr[i][j]>0&&frr[i-1][j]>0)
         {
             frr[i][j] = frr[i-1][j]+1;
         }
      }
  }

   for(int i=n-1;i>=0;i--)
  {
      for(int j=m-1;j>=0;j--)
      {
         if(i+1<n&&frr[i+1][j]>frr[i][j]&&frr[i+1][j]>0&&frr[i][j]>0)
         {
             frr[i][j] = frr[i+1][j];
         }
      }
  }


  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
         if(j+1<m&&frr[i][j]!=frr[i][j+1]&&frr[i][j]>0&&frr[i][j+1]>0)tr = false;
      }
  }

  if(tr)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;


}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

