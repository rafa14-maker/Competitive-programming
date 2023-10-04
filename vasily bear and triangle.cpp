#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  a,b,k,c,d;
    cin>>a>>b;
    if(a*b>0)
    {
       k=-1;
    }
    else
    {
        k=1;
    }
      c=-b*k+a;
      d=-a*k+b;

    if(c>0)
    {
        cout<<0<<" "<<d<<" "<<c<<" "<<0;
    }
    else
    {
        cout<<c<<" "<<0<<" "<<0<<" "<<d<<endl;
    }

}
