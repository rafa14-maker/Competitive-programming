#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int n,m;
       scanf("%d %d",&n,&m);
       long long x,a,b,c;
        scanf("%lld %lld %lld %lld",&x,&a,&b,&c);

        long long arr[n+5];
        arr[0]=x;
        for(int i=1;i<n;i++)
        {
            arr[i]=((((arr[i-1])*a)%c)+b)%c;
        }
        sort(arr,arr+n);
            printf("%lld\n",arr[m-1]);
   }
}
