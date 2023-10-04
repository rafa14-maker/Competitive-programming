#include<iostream>
using namespace std;

long long int rec(long long int a,long long int b )
{
    if(b==0)
    {
        return 0;
    }
    else if(b==1)
    {
        return a;
    }

    else
    {
        long long int r=rec(a,b/2);
        if(b%2==0)
        {
            return r*r;
        }
        else
        {
            return r*r*a;
        }
    }
}

int main()
{
    long long int  a,b,c;

    cin>>a>>b;

    c=rec(a,b);

    cout<<c<<endl;

    return 0;
}
