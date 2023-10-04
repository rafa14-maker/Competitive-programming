#include<bits/stdc++.h>
using namespace std;

long long cal(long long i,long long j)
{
        long long  a=i*i;
           a*=i;
        long long    b=j*j;
           b*=j;
           return a+b;
}

void solve()
{
   long long n;
   cin>>n;
   bool tr=false;
   for(long long i=1;i<=1e5;i++)
   {
      long long l=1;
      long long r=1e5;
      while(l<=r)
      {
          long long mid=(l+r)/2;
          long long pk=cal(mid,i);
          if(pk==n)
          {
              tr=true;
              break;
          }
          else if(pk>n)
          {
              r=mid-1;
          }
          else l=mid+1;
      }
   }
   if(tr)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

