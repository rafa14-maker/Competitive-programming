#include<bits/stdc++.h>
using namespace std;
#define max 10000000

int main()
{
    int a,i;
    double b,k,l,sum=max,m;

    cin>>a>>b;

    while(a--)
    {
        cin>>k>>l;
        m=(k/l)*b;
        sum=min(sum,m);
    }

    printf("%.07lf\n",sum);
}
