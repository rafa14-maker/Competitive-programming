#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;
  int n;
  cin>>n;

  char arr[n+5][n+5];

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          cin>>arr[i][j];
      }
  }

  bool tr = false;

   for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          int cnt = 0;
          if(i+5<n)
          {
              for(int a=i;a<=i+5;a++)
              {
                  if(arr[a][j]=='.')cnt++;
              }
              if(cnt<=2)tr=true;
          }
          cnt = 0;
          if(j+5<n)
          {
              for(int a=j;a<=j+5;a++)
              {
                  if(arr[i][a]=='.')cnt++;
              }
              if(cnt<=2)tr=true;
          }
         cnt = 0;
          if(i+5<n&&j+5<n)
          {
               for(int a=i,b=j;a<=i+5;a++,b++)
              {
                  if(arr[a][b]=='.')cnt++;
              }
              if(cnt<=2)tr=true;
          }
          cnt=0;
          if(i+5<n&&j-5>=0)
          {
               for(int a=i,b=j;a<=i+5;a++,b--)
              {
                  if(arr[a][b]=='.')cnt++;
              }
              if(cnt<=2)tr=true;
          }
        //   cout << cnt << endl;
      }
  }

  if(tr)cout <<"Yes"<<endl;
  else cout <<"No"<< endl;
}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
   solve();
}

