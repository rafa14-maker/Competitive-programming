#include<bits/stdc++.h>
using namespace std;
#define max 1000000
#define md 1000000007

bool prime[max];

void seive()
{
    memset(prime,true,max);

    for(int i=2;i*i<max;i++)
    {
        for(int j=i*2;j<max;j+=i)
        {
            prime[j]=false;
        }
    }
}

int bigmod(int a,int b,int m)
{
    if(b==0)
    {
        return 1;
    }
    int x=bigmod(a,b/2,m);

    x=(x*x)%m;

    if(b%2==1)
    {
        x=(x*a)%m;
    }

    return x;
}

int main()
{
    seive();

  int t,p=0;
  cin>>t;

  while(t--)
  {
      int n,k;
      cin>>n>>k;
      int c=bigmod(n,k,md);

      int mul=1;

      for(int i=2;i<=c;i++)
      {
          if(prime[i]==true)
          {
              int sum=0,l=0;
              while(c%i==0)
              {
                  (sum+=bigmod(i,l,md))%md;
                  l++;
                  c/=i;
              }
              mul=((mul%md)*(sum%md))%md;
          }
      }
      printf("Case %d: %d\n",++p,mul);
  }

}
