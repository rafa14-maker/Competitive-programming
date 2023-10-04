#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d,e,f;
    char k;
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
     scanf("%lf %c %lf",&a,&k,&b);
        c=sqrt(a*a+b*b)/2.0;
       d=acos((c*c+c*c-b*b)/(2.0*c*c));
         e=c*d;
        f= 400.0/(2.0*a+2.0*e);
        printf("Case %d: %.10lf %.10lf\n",i,f*a,f*b);
    }
}
