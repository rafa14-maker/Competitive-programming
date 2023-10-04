#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x,y,n;
    cin>>n>>x>>y;

    n*=(y/100.00);
    if(n>x)cout<<ceil(n-x)<<endl;
    else cout<<0<<endl;
}
