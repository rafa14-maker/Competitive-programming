#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long n;
   cin>>n;

    long long ans=1,k=n;

    for(long long i=2;i*i<=n;i++)
    {
        if(k%i==0)
        {
            ans*=i;
        while(k%i==0)
        {
           // ans*=i;
            k/=i;
        }
    }
    }
    if(k>1)ans*=k;
    cout<<ans<<endl;
}
