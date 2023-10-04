#include<bits/stdc++.h>
using namespace std;

int main()
{
    double l,h;
    cin>>h>>l;
    double a=(l*l+h*h)/(2*h);
    printf("%.10lf\n",a-h);
}
