#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    c+=0.5;
    double sum=0;
    while(c>=a)
    {
       sum+=b;
       c-=a;
    }
    cout<<sum<<endl;
}
