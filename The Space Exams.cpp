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
       int arr[n+5];
       int frr[n+5]={0};
       for(int i=0;i<m;i++)
       {
           long long sum=0;
           for(int i=1;i<=n;i++)cin>>arr[i],sum+=arr[i];
          if(sum==0)continue;
          sum/=n;
          for(int i=1;i<=n;i++)
          {
              if(arr[i]>sum)frr[i]=1;
          }
       }
       int counter=0;
       for(int i=1;i<=n;i++)
       {
           if(frr[i]==1)counter++;
       }
       cout<<counter<<endl;
    }
}
