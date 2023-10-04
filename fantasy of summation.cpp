#include<bits/stdc++.h>
using namespace std;

int  bigmod(int a,int b,int m)
{
    if(b==0)
    {
        return 1%m;
    }
    int  x=bigmod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)x=(x*a)%m;

    return x;
}
int main()
{
    int t,p=0;
    cin>>t;
    while(t--)
    {
        int n,k,mod;
        cin>>n>>k>>mod;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int m=bigmod(n,k,mod);
        m/=n;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=(((arr[i])%mod)*(m%mod))%mod;
        }
        (sum*=k)%m;
        printf("Case %d: %d\n",++p,sum);
    }
}

