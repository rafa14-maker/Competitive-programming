#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b;
    cin>>n>>a>>b;
    if(a==0)
    {
        cout<<0<<"\n";
        return 0;
    }
    else
    {
      if(n<=a+b)
      {
          cout<<min(n,a)<<"\n";
      }
      else
      {
          long long m = (n/(a+b))*a,p=0;
          if(n%(a+b)!=0)p=n%(a+b);
          cout<<m+min(p,a)<<"\n";
      }
    }
}
