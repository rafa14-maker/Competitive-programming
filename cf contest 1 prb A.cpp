#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,m,i,counter=0,sum=0;

    cin>>a>>b;

    while(b>=a)
    {
        counter++;
        b-=a;
    }

    if(b>0)
    {
        counter++;
    }

    cout<<counter<<endl;
}
