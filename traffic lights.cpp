#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,d,v,g,r;
    cin>>l>>d>>v>>g>>r;

  double ans=1.0*l/v;
  double t=1.0*d/v;

   while(t>g+r)t-=(g+r);

   if(t>=g)ans+=g+r-t;

   printf("%.10lf\n",ans);
   }
