#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,p,q,r,count=0,b,c;

    cin>>x>>y>>z>>p>>q>>r;

    if(x>y)
    {
        count+=(x-y);
        c=x-y;
    }
    else
    {
               count+=(y-x);
               c=y-x;

    }

    if(x>z)
    {
        count+=(x-z);
    }
    else{
        count+=(z-x);
    }



b=(count*q)+3*r;



    if(b<=p*c)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
