#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    cin>>a;
    if(a==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    long long n=a*a;
    for(int i=1;i<=1e5;i++)
    {
        long long b=i*i;
        long long gap=abs(n-b);
         long long k=sqrt(gap);
         if(k*k==gap&&gap>0)
         {
             cout<<i<<" "<<k<<endl;
             return 0;
         }
         gap=b+n;
          k=sqrt(gap);
         if(k*k==gap&&gap>0)
         {
             cout<<i<<" "<<k<<endl;
             return 0;
         }
    }
    cout<<-1<<endl;
}
