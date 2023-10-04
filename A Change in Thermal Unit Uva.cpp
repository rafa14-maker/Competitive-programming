#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    int t=0;
    while(q--)
    {
        float a,b;
        cin>>a>>b;
        float f=((9*a)+180)/5;
        f+=b;
        float c=((5.00*f)-180.00)/9.00;
        printf("Case %d: %.2f\n",++t,c);
    }
}
