
#include<bits/stdc++.h>
using namespace std;
#define M 5000000

unsigned long long sum[M];

int phi[M+2];

void tot_seive()
{

    for(int i=1;i<=M;i++)
    {
        phi[i]=i;
    }
    for(int p=2;p<=M;p++)
    {
        if(phi[p]==p)
        {
            for(int k=p;k<=M;k+=p)
            {
                phi[k]-=phi[k]/p;
            }
        }
    }

}


void esum()
{
    sum[1] = 0;

    for(int i=2; i<=M; i++)
    {
        sum[i] = phi[i];
        sum[i]*=phi[i];
        sum[i]+=sum[i-1];
    }

}

int main()
{
    tot_seive();
    esum();
    int t,p=0;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
            scanf("%d%d",&a,&b);


        printf("Case %d: %llu\n",++p,sum[b]-sum[a-1]);

    }
}

