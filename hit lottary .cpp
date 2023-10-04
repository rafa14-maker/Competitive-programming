#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,counter=0;
    cin>>a;
    if(a>=100)
    {
        counter+=a/100;
        a=(a%100);
    }
     if(a>=20)
    {
        counter+=a/20;
        a=(a%20);
    }
     if(a>=10)
    {
        counter+=a/10;
        a=(a%10);
    }
     if(a>=5)
    {
        counter+=a/5;
        a=(a%5);
    } if(a>=1)
    {
        counter+=a/1;
        a=(a%1);
    }
    cout<<counter<<endl;
}
