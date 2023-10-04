#include<bits/stdc++.h>
using namespace std;

long long int rec(long long int a,long long int b)
{
    if(b==0)
    {
        return 1;
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
    long long int a,b,i;

    cin>>a;

    for(i=2;i<a;i++)
    {
        b=rec(i,a)-i;
        if(b%a!=0)
        {
            cout<<"NO"<<" "<<i<<" "<<b<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl;
}


