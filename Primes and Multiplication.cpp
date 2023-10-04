#include<bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;

int main()
{
    long long a,b;
    cin>>a>>b;
    vector<long long>v;
    for(int i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            v.push_back(i);
            a/=i;
        }
    }

    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;

    long long sum=1;
    for(int i=0;i<v.size();i++)
    {
        long long k=v[i];
        if(b%k==0)
        {
            while(b%k==0)
            {
                k*=v[i];
            }
            k/=v[i];
            sum=(sum*k)%mod;
        }
    }
    cout<<sum<<endl;
}
