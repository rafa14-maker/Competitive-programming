#include<bits/stdc++.h>
using namespace std;

int main()
{
      long long n,k;
    while(scanf("%lld %lld",&n,&k)!=EOF)
    {
       long long sum=1;
       for(int i=1;i<=n;i++)
       {
           sum*=i;
           sum=sum%k;
       }
       if(sum==0)printf("%lld divides %lld!\n",k,n);
       else printf("%lld does not divide %lld!\n",k,n);
    }
}
