#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    for(int e=1;e<=q;e++)
    {
    long long n;
    scanf("%lld",&n);

      int flag=0;
      if(n<0)
      {
          flag++;
          n*=(-1);
      }

      long long p=1;

    for(long long i=2;i*i<=n;i++)
    {
        long long  counter=0;
        long long m=n;
        if(n%i!=0)continue;

        while(m%i==0)
        {
            m/=i;
            counter++;
        }

        if(m==1)
        {
            if(flag==1&&counter%2==1)
            {
                p=counter;
                break;
            }
            else if(flag==0)
            {
                 p=counter;
                break;
            }
        }
    }
       printf("Case %d: %lld\n",e,p);
    }
}
