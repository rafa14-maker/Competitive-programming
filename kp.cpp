#include<bits/stdc++.h>
using namespace std;

using ll=long long ;

int n,k;

void solve()
{
  cin>>n>>k;
  ll arr[n+5],frr[n+5];
  for(int i=0;i<n;i++)cin>>arr[i],frr[i]=arr[i];
  for(int i=1;i<n;i++)frr[i]+=frr[i-1];
  if(n<=k)
  {
      cout<<frr[n-1]<<endl;
      return ;
  }
  ll idx1=-1,idx2=-1,cnt=0,sum=0;

  for(int i=0;i<n-k+1;i++)
  {
      long long kp=0;
      if(i==0)kp=0;
      else kp=frr[i-1];
      kp=frr[i+k-1]-kp;
      if(kp>cnt)
      {
          cnt=kp;
          idx1=i;
          idx2=i+k-1;
      }
  }

  sum+=cnt;

 // cout<<cnt<<" "<<idx1<<" "<<idx2<<endl;

  for(int j=idx1;j<=idx2;j++)arr[j]=0;

  vector<ll>v;

  for(int i=0;i<n;i++)
  {
      if(arr[i]!=0)v.push_back(arr[i]);
  }

  for(int i=1;i<v.size();i++)v[i]+=v[i-1];

  idx1=-1,idx2=-1,cnt=0;

  if(v.size()<=k)
  {
      sum+=v[v.size()-1];
  }
  else{
        cnt=0;
   for(int i=0;i<v.size()-k+1;i++)
  {
      long long kp;
      if(i==0)kp=0;
      else kp=v[i-1];
      kp=v[i+k-1]-kp;
      if(kp>cnt)
      {
          cnt=kp;
      }
  }
  sum+=cnt;
  }
  cout<<sum<<endl;
}

int main()
{
 //   int q;scanf("%d",&q);while(q--)solve();
   solve();
}


