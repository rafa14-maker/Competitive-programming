#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+5;

int divisor[N];

void sieve()
{
    for(int i=2;i<=N;i++)
    {
        if(divisor[i]==0)
        {
            for(int j=i;j<=N;j+=i) divisor[j]++;
        }
    }
}

int main()
{
    sieve();
    int n;
    while(1)
    {
       scanf("%d",&n);
       if(n==0)break;
       printf("%d : %d\n",n,divisor[n]);
    }
}
