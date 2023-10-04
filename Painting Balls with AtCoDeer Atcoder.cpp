#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    long long sum=1,mod=pow(2,31)-1;
    for(int i=1;i<=n;i++)
    {
        if(i==1)sum*=k,sum=sum%mod;
        else sum*=(k-1),sum=sum%mod;
    }
    cout<<sum<<endl;
}
