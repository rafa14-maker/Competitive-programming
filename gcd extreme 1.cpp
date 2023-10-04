#include<bits/stdc++.h>
using namespace std;

int phi[1000005];
long long sum[1000005];

void call()
{
    for(int i=0;i<=1000000;i++)phi[i]=i;

    for(int i=2;i<=1000000;i++)
    {
        if(phi[i]==i)
        {
           for(int j=i;j<=1000000;j+=i)
           {
               phi[j]-=phi[j]/i;
           }
        }
    }

     for(int i=1;i<=1000000;i++)
    {
        for(int j=i+i;j<=1000000;j+=i)
        {
            sum[j] = sum[j] + (long long) (i*phi[j/i]);
        }
    }

for(int i=1;i<=1000000;i++) sum[i] = sum[i] + sum[i-1] ;

}

int main()
{
    call();
   while(1==1)
   {
       int n;
       cin>>n;
       if(n==0)break;
       cout<<sum[n]<<endl;
   }
}
