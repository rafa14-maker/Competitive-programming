#include<bits/stdc++.h>
using namespace std;

int main()
{
    double r,c;
    cin>>r>>c;
    if(r==c)
    {
        cout<<"0.00000000"<<endl;
        return 0;
    }
    double k=(r*r-c*c)/(r*r);
    k*=100.00;
    double p=100.00-k;

    printf("%.10lf\n",p);

}
