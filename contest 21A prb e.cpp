#include<bits/stdc++.h>
using namespace std;

int main()
{
  double i,a,l,u;
  int k,p=0;
  cin>>k;
  while(k--)
  {

      cin>>a;
      i=(2*a)*(2*a);
      l=2*acos(0.0)*a*a;
      p++;
      u=i-l;
      printf("Case %d: %.2lf\n",p,u);

  }
  return 0;
}
