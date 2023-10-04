#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1e5+5;
    long long arr[n];
    for(int i=1;i<=n;i++)
    {
        arr[i]=i*i;
    }
    int m;
    cin>>m;
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==m)flag++;
    }
    if(flag==0)
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
      int p=m-i;
      int l=0,r=n;

      while(l<r)
      {
          int mid=(l+r)/2;
          if(arr[mid]==p)
          {
              cout<<p<<endl;
              return 0;
          }
      }
    }
}
