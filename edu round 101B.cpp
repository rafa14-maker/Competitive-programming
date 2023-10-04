#include<bits/stdc++.h>
using namespace std;
/*
void solve()
{
  int n;
  cin>>n;
  int arr[n+5];
  for(int i=0;i<n;i++)cin>>arr[i];
  int m;
  cin>>m;
  int frr[m+5];
  for(int i=0;i<m;i++)cin>>frr[i];
  int ans=0,sum=0;
  int cnt=0,idx1=0,idx2=0;

  while(1)
  {
      if(cnt%2==0)
      {
          if(idx1<n)
          {
              sum+=arr[idx1];
              idx1++;
          }
          else if(idx2<m)
          {
              sum+=frr[idx2];
              idx2++;
          }
          else break;
      }

      else
      {
           if(idx2<m)
          {
              sum+=frr[idx2];
              idx2++;
          }
          else if(idx1<n)
          {
              sum+=arr[idx1];
              idx1++;
          }
          else break;
      }
      ans=max(ans,sum);
      cnt++;
  }
  ans=max(ans,sum);
  cout<<ans<<endl;

}*/

int n,m;
int arr[200],frr[200];
int ans=0;
bool dp[200][200];


void f(int i,int j,int sum)
{
  if(dp[i][j])return ;
  dp[i][j]=true;
    int fsum=sum;

    if(i<=n){
    sum+=arr[i];
    ans=max(ans,sum);
    f(i+1,j,sum);
    }
    sum=fsum;
    if(j<=m){
    sum+=frr[j];
    ans=max(ans,sum);
    f(i,j+1,sum);
    }
}

void solve()
{
    ans=0;
    memset(arr,0,sizeof arr);
    memset(frr,0,sizeof frr);
    memset(dp,false,sizeof dp);
  //  int n;
  cin>>n;
 // int arr[n+5];
  for(int i=0;i<n;i++)cin>>arr[i];
 // int m;
  cin>>m;
 // int frr[m+5];
  for(int i=0;i<m;i++)cin>>frr[i];

  f(0,0,0);
 // cout<<"900990"<<" ";
  cout<<ans<<endl;

}

int main()
{
    int q;cin>>q;while(q--)solve();
}
