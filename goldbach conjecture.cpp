#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+5;

bool prime[N];

void seive()
{
    memset(prime,true,sizeof(prime));
    prime[1]=false;

    for(int i=2;i*i<=N;i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*2;j<=N;j+=i)
            {
                prime[j]=false;
            }
        }
    }
}


int main()
{
    seive();
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)break;

        for(int i=2;i<=n;i++)
        {
            if(prime[i]==true&&prime[n-i]==true)
            {
                printf("%d = %d + %d\n",n,i,n-i);
                break;
            }
        }

    }
}
