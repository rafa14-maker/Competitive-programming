#include<bits/stdc++.h>
using namespace std;

#define N 1000000


bool prime[N];

void seive()
{
   memset(prime,true,sizeof prime);

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
    cin>>n;

   /* if(check(n))
    {
        cout<<1<<endl;
        return 0;
    }*/

   for(int i=2;i<=n;i++)
   {
       if(prime[i]==true)cout<<i<<" ";
   }
}
