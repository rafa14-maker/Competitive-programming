#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d,e,f,k,l,m,p,q;
    int n,i;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
        k=sqrt(((a-c)*(a-c))+(b-d)*(b-d));
        l=sqrt(((a-e)*(a-e))+((b-f)*(b-f)));
        m=sqrt(((c-e)*(c-a))+((d-f)*(d-f)));

       p=acos((k*k)+(l*l)-(m*m))/(2.0*k*l);
        q=p*k;

        cout<<p<<endl;



    }

    return 0;
}
