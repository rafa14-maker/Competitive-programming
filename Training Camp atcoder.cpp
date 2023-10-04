#include<bits/stdc++.h>
using namespace std;

int mod = 1e9+7;

int main()
{
    int n;
    cin>>n;
    long long sum=1;
    for(int i=1;i<=n;i++)
    {
        sum*=i;
        sum=sum%mod;
    }
    cout<<sum<<endl;
}
