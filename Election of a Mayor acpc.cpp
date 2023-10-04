#include<bits/stdc++.h>
using namespace std;

using ll=long long ;

int n,k;

void solve()
{
  int n;
  cin>>n;

  int arr[n+5],frr[n+5];

  int cnt=0,sum=0,sam=0;

  for(int i=0;i<n;i++)
  {
      cin>>arr[i]>>frr[i];
      if(arr[i]>frr[i])cnt++;
      else if(arr[i]<frr[i])sum++;
      else sam++;
  }

 // cout<<sum<<" "<<cnt<<" "<<sam<<endl;

  vector<pair<int,int> >v;

  for(int i=0;i<n-1;i++)
  {
      if(sum+sam<cnt)break;
      if(frr[i]!=-1&&frr[i+1]!=-1&&frr[i]>arr[i]&&frr[i+1]>arr[i+1])
      {
          sum--;
          frr[i]= -1;
          frr[i+1]= -1;
          v.push_back(make_pair(i+1,i+2));
      }
  }

  for(int i=0;i<n-1;i++)
  {
      if(sum+sam<cnt)break;
      if(frr[i]!=-1&&frr[i+1]!=-1&&frr[i+1]+frr[i]<arr[i+1]+arr[i]&&(arr[i]<=frr[i]||arr[i+1]<=frr[i+1]))
      {
        if(frr[i]==arr[i]||frr[i+1]==arr[i+1])sam--;
        else  sum--;
          cnt++;
          frr[i]= -1;
          frr[i+1]= -1;
          v.push_back(make_pair(i+1,i+2));
      }
  }
  if(cnt<=sum+sam)cout<<-1<<endl;
  else
  {
      cout<<v.size()<<endl;
      for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<endl;
  }
}

int main()
{
 //   int q;scanf("%d",&q);while(q--)solve();
   solve();
}




