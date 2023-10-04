#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n,k;
        cin>>n>>k;
        if(n%2==0)
        {
           cout<<n+(k*2)<<endl;
        }
        else
        {
            long long p=n;
            for(long long i=2;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    p=min(p,i);
                    break;
                }
            }
            if(k==1)cout<<n+p<<endl;
            else cout<<n+p+((k-1)*2)<<endl;
        }
    }
}
