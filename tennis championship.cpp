#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a=0,b=1,c=a+b,counter=0;
    cin>>n;
    while(c<=n)
    {
        a=b;
        b=c;
         c=a+b;
        counter++;
    }
    cout<<counter-1<<endl;
}
