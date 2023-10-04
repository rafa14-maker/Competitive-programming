#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double sum=0;
    while(n--)
    {
        double a;
        cin>>a;
        sum+=(1/a);
    }
    printf("%lf\n",1/sum);
}
