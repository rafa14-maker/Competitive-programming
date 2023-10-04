#include<bits/stdc++.h>
using namespace std;

int main()
{
    double k,a,b,l;
  int p=0,n;
  cin>>n;
  while(n--)
  {
      p++;
      cin>>a>>b;
      l=(2*a)/b;
      printf("Case %d: %.10lf\n",p,l);
  }
  return 0;
}
