#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
  int n,k;
  cin>>n>>k;
  if(k>n)
  {
      cout<<-1<<endl;
      return ;
  }

  char arr[n+5][n+5];

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          arr[i][j]='.';
      }
  }

  int idx=0,jdx=0;
  int cnt =0;

  for(int i=0;i<k;i++)
  {
      cnt++;
     arr[idx][jdx]='R';
     idx+=2;
     jdx+=2;
     if(idx>=n||jdx>=n)break;
  }

  if(cnt!=k)
  {
      cout<<-1<<endl;
      return ;
  }

   for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          cout<<arr[i][j];
      }
      cout<<endl;
  }

}

int main()
{
    CherryFrog;
    //cout <<"Baby NO Fly!"<<endl;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

