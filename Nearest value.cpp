#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x,y,n,res,z=0.0;
    cin>>x>>y>>n;
    int f=1000000,e;
    double k=1000000.00;
    for(double i=1;i<=n;i++)
    {
      res=1e18;
      while(abs(x/y-z/i)<res)
      {
          res=abs(x/y-z/i);
          z++;
      }
      z--;
      if(k>res)
      {
          k=res;
          f=z;
          e=i;
      }
      if(k==0)break;
    }
    cout<<f<<"/"<<e<<endl;
}
