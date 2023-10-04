#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,r1,c,d,r2,k=0;
    cin>>a>>b>>r1>>c>>d>>r2;
    double v=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));

    if(v>r1+r2)k=v-r1-r2;
    else if(v<abs(r1-r2))k=abs(r1-r2)-v;

    printf("%.10lf\n",k/2);
}
