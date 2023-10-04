#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0,b=0,n,m,counter=0,i=0,c=0;

    cin>>n;

    while(counter<=n)
    {
        counter+=i;
        c=b;
        b=a;
        a=counter;
        i++;
    }

    cout<<a<<endl<<b<<endl<<c<<endl;
}
