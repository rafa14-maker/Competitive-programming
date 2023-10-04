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
  while(n!=0)
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
                  cout<<b-1<<endl;
                  printed=true;
                  break;
              }
          }
          if(!printed)
          {
              cout<<1<<endl;
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
                  cout<<b-1<<endl;
                  printed=true;
                  break;
              }

          }
          if(!printed)
          {
              cout<<1<<endl;
          }
      }
  }

  return 0;
}
