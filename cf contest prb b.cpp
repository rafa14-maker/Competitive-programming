#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,a,sum=0;

    cin>>n>>m;
    int k=0;
    for(i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
        if(a>k)
        {
            k=a;
        }
    }
    if(sum<)
    sum-=k;
    sum-=(n-k);
  if(sum>=m)
  {
      cout<<sum<<endl;
  }
    else
    {
        cout<<0<<endl;
    }
}
