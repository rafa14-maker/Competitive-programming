#include<bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)


int main()
{
    int i,n;
    double a,b,c,d,e,f;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);

      e=b+(a-b)*(double(d)/c);

      f=(1/3.0)*PI*(e*e+b*b+e*b)*d;

        printf("Case %d: %.8lf\n",i,f);
    }
}
