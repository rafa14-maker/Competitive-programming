#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+5;

long long d[N];

void seive()
{
   memset(d,0,N);

  for(int i=2;i<=N;i++)
  {
      if(d[i]==0)
      {
          for(int j=i;j<=N;j+=i)
          {
              int k=j,counter=0;
              while(k%i==0)
              {
                  k/=i;
                  counter++;
              }
              d[j]+=counter;
          }
      }
  }

  for(int i=2;i<=N;i++)
  {
      d[i]=d[i]+d[i-1];
  }

}

int main()
{
    seive();

   long long n;

   while(scanf("%lld",&n)!=EOF)
   {
       printf("%lld\n",d[n]);
   }




}
