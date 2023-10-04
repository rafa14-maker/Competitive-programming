#include<bits/stdc++.h>
using namespace std;

long long expo(long long a,long long  n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return a;
    }
    else
    {
        long long r=expo(a,n/2);

        if(n%2==0)
        {
            return r*r;
        }
        else
        {
            return r*r*a;
        }
    }
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
                  ans=expo(i,b);
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
                  ans=expo(i,b);
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
