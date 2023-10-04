#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long mod=1e9+7;
    int n;
    cin>>n;
    long long a=0,b=1,r=0;
    int counter=0;
    while(r!=797922655)
    {
        counter++;
        r=(a+b)%mod;
        a=b%mod;
        b=r%mod;
    }
    cout<<counter<<endl;
    cout<<a<<" "<<b<<endl;
}
