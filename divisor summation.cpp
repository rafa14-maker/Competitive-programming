#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int n;
        scanf("%d",&n);
        long long sum=0;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if((n/i)==i)
                sum+=i;

                else sum+=(i+n/i);
              //  sum+=(n/i);
               // n/=i;
            }
        }
      //  if(n>0)sum+=n;
       if(n==1) printf("%ld\n",sum);
       else  printf("%ld\n",sum+1);
    }
}
