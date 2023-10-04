#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long n;
  while(1==1)
  {
      scanf("%lld",&n);
      if(n==0)break;

      vector<long long>v;

      for(int i=1;i*i<=n;i++)
      {
          if(n%i==0)
          {
              v.push_back(i);
              if(n/i!=i)
              {
                  v.push_back(n/i);
              }
          }
      }
      int counter=0;
      for(int i=0;i<v.size();i++)
      {
          for(int j=i+1;j<v.size();j++)
          {
              if((v[i]*v[j])/__gcd(v[i],v[j])==n)
              {
                  counter++;
              }
          }
      }
      printf("%lld %d\n",n,counter+1);
  }
}
