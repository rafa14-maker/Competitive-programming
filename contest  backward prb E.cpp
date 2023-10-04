#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==a)
    {
        return a;
    }
    else
    {
        return gcd(b,b%a);
    }
}

int main()
{
    int n,k,l,i;

    while(1==1)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        k=1;
        for(i=2;i<=n;i++)
        {
          k=k*i/gcd(k,i);
        }

        while(k%10==0)
        {
            k/=10;
        }
        printf("%d\n",k%10);
    }

}
