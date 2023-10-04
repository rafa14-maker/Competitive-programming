#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double d=sqrt(a*b/c);
    double e=sqrt(a*c/b);
    double f=sqrt(b*c/a);
   // cout<<a<<" "<<b<<" "<<c<<endl;
    cout<<(d+e+f)*4<<endl;
}
