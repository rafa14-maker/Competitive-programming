#include<bits/stdc++.h>
using namespace std;

long long k,n,a,b;

bool check(long long c)
{
   // cout<<k<<" "<<n<<" "<<a<<" "<<b<<endl;
    long long p=c*a;
    long long m=k-p;
    if(m<0)return false;

    long long y=n-c;
    y=y*b;
    if(y<m)return true;
    else return false;
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
      // int k,n,a,b;
       scanf("%lld %lld %lld %lld",&k,&n,&a,&b);

      long long l=0,r=n;
      long long sum=-1;

      while(l<=r)
      {
        //  cout<<l<<" "<<r<<endl;
          long long mid=(l+r)/2;
          if(check(mid))
          {
              sum=max(sum,mid);
              l=mid+1;
          }
          else  r=mid-1;
      }
      if(sum==-1)cout<<-1<<endl;
      else
      {
        cout<<sum<<endl;
    }
    }
}
