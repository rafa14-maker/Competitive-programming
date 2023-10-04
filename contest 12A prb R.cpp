#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d,e,t1,t2,l,t,l1,l2;
    int n,i;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);

        t1=a/d;
        t2=b/e;
        t=max(t1,t2);

       l1=(a*a)/(2*d);
       l2=(b*b)/(2*e);

        printf("Case %d: %lf %lf\n",i,l1+l2,c*t);
    }

    return 0;
}
