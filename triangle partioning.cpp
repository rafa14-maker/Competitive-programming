#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d,e;
    int n,i;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>a>>e>>d>>b;
        c=a*sqrt(b/(1+b));
        printf("Case %d: %.10lf\n",i,c);
    }
}
