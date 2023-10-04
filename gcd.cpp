#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    else{
        return gcd(b%a,a);
    }
}

int main()
{
    int a,b,c;

    cin>>a>>b;

    c=gcd(a,b);

    cout<<c<<endl;
}
