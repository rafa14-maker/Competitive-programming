#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main()
{
  ll x,y,a,b;
  cin>>x>>y>>a>>b;

  if(x*a>=b)
  {
      ll z=y-x;
      z/=b;
       if((y-x)%b==0)z--;
          if(z<0)z=0;
      //  if((y-x)%b!=0)z++;
      cout<<z<<endl;
      return 0;
  }

  ll cnt=0;
  while(x<y)
  {
      cnt++;
      if(x*a<=b)
      {
          ll kp=x;
          x*=a;
          if(kp>x)break;
          if(x>=y)break;
      }
      else
      {
           ll z=y-x;
          z/=b;
          if((y-x)%b==0)z--;
          if(z<0)z=0;
      //  if((y-x)%b!=0)z++;
      cout<<z+cnt-1<<endl;
      return 0;
      }
  }

      cout<<cnt-1<<endl;
}
