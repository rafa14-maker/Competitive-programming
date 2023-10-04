#include<bits/stdc++.h>
using namespace std;
#define MAX 0.000000001
double x,y,c,k;

int i,n;

double check(double z)
{
    double a=1/(sqrt(x*x-z*z));
    double b=1/(sqrt(y*y-z*z));
    return (a+b);
}
double boss()
{
    double r,l;
    r=min(x,y);
    l=0.0;

    while(r-l>0.000000001)
    {
        double mid=(r+l)*0.5;

        if(check(mid)>1/c)
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
    }
    return l;
}
int main()
{
 //   scanf("%d",&n);
    while(scanf("%lf %lf %lf",&x,&y,&c)!=EOF)
    {
      //  scanf("%lf %lf %lf",&x,&y,&c);
        k=boss();
        printf("%lf\n",k);
    }
    return 0;
}
