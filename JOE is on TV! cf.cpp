#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin>>n;
    double a=0;
    for(double i=1;i<=n;i++)
    {
        a+=(1/i);
    }
    printf("%lf\n",a);
}
