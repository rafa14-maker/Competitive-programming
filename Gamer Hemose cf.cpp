#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    long long arr[n+5];
    long long k;
    cin>>k;

    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    long long a = arr[n-1];
    long long b = arr[n-2];

    long long ab = a+b;

    if(k>=ab)
    {
        long long  pk = k/ab;
        k-= pk*ab;
        pk*=2;
        if(k>0)pk++;
        cout<<pk<<endl;
    }
    else
    {
        if(a>k)
        {
            cout<<1<<endl;
            return ;
        }
        long long pka = k/a;
        k -= pka*a;
        if(k>0&&k<=b)pka++;
        else if(k>0) pka+=2;
        cout<<pka<<endl;
    }

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
