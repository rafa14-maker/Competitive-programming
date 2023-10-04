#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n+5];
    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
    long long hero[n+5];
    for(int i=0;i<n;i++)cin>>hero[i];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
      sum+=min(arr[i],hero[i]);
      if(hero[i]>arr[i])
      {
          hero[i]-=arr[i];
          sum+=min(hero[i],arr[i+1]);
          arr[i+1]-=hero[i];
          if(arr[i+1]<0)arr[i+1]=0;
      }
    }
    cout<<sum<<endl;
}
