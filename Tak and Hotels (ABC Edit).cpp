#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<=b)
    {
        cout<<a*c<<endl;
    }
    else
    {
        int e = a-b;
        int sum = (b)*(c)+e*d;
        cout<<sum<<endl;
    }
}
