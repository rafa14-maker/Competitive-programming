#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    while(scanf("%lld %lld",&n,&k)!=EOF)
    {
        long long m = n^k;
      /*  for(int i=0;i<=33;i++)
        {
            long long idx = bigmod(2,i);
            if(idx>n&&idx>k)
            {
               if(m&idx)m-=idx;
            }
        }*/
        cout<<m<<endl;
    }
}
