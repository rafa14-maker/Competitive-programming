#include<bits/stdc++.h>
using namespace std;

long long powerUp (int i, int p)
{
    long long sum = i;
    for ( int k = 2; k <= p; k++ ) {
        sum *= i;
    }

    return sum;
}

int main()
{
  double n;
  int t,p=0;
  cin>>t;
  while(t--)
  {
      cin>>n;
      bool printed=false;

      if(n<0)
      {
          int len=sqrt(n*-1);

          for(int i=-2;i>=-len;i--)
          {
              long long ans=i;

              int b=2;

              while(ans>n)
              {
                  ans=powerUp(i,b);
                  b++;
              }
              if(ans==n)
              {
                  printf("Case %d: %d\n",++p,b-1);
                  printed=true;
                  break;
              }
          }
          if(!printed)
          {
             printf("Case %d: 1\n",++p);
          }
      }
      else if(n>0)
      {
          int len=sqrt(n);

          for(int i=2;i<=len;i++)
          {
              long long  ans=i;

              int b=2;

              while(ans<n)
              {
                  ans=powerUp(i,b);
                  b++;
              }
              if(ans==n)
              {
                   printf("Case %d: %d\n",++p,b-1);
                  printed=true;
                  break;
              }

          }
          if(!printed)
          {
               printf("Case %d: 1\n",++p);
          }
      }
  }

  return 0;
}
