#include<bits/stdc++.h>
using namespace std;

const int N =1e5+5;
int arr[N];
map<int,int>mp;

int main()
{
    int n,k;
    cin>>n>>k;
  //  int arr[n+5];
    for(int i=1;i<=n;i++)cin>>arr[i];
    long long sum=0;

    int idx=0,p=0;

    for(int i=1;i<=k;i++)
    {
      mp[arr[i]]++;
      if(mp[arr[i]]>p)
      {
          p=mp[arr[i]];
          idx=arr[i];
      }
      else if(mp[arr[i]]==p)
      {
          idx=max(arr[i],idx);
      }
    }
//cout<<idx<<endl;
    sum+=idx;


   for(int i=2;i<=n;i++)
    {
      if(i-1>=1)  mp[arr[i-1]]--;
      if(i+k-1<=n) mp[arr[i+k-1]]++;


   //   cout<<endl;

      p=0,idx=0;
    for(int j=i;j<=i+k-1;j++)
    {
      if(mp[arr[j]]>p)
      {
          p=mp[arr[j]];
          idx=arr[j];
      }
      else if(mp[arr[j]]==p)
      {
          idx=max(arr[j],idx);
      }
    }
   //  cout<<idx<<" "<<i<<" "<<i+k<<endl;
     sum+=idx;
     if(i+k-1==n)break;
    }
    cout<<sum<<endl;
}
