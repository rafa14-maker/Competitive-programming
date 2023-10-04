#include<bits/stdc++.h>
using namespace std;

int divisor[1000000+10] , ANS[11][1000000+10] ;

void sieve()
{
    for(int i=2;i<=1000000;i++)
    {
        if(divisor[i]==0)
        {
            for(int j=i;j<=1000000;j+=i) divisor[j]++;
        }
    }

    for(int n=0;n<=10;n++)
    {
        for(int i=1;i<=1000000;i++) ANS[n][i] = ANS[n][i-1] + (bool) ( divisor[i] == n ) ;
    }
}

int main()
{
    sieve();
   int q;
   scanf("%d",&q);
   while(q--)
   {
       int a,b,k;
       scanf("%d%d%d",&a,&b,&k);

       printf("%d\n",ANS[k][b]-ANS[k][a-1]);
   }
}
