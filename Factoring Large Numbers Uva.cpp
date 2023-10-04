#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll n;
    while(1)
    {
        cin>>n;
        if(n==-1)break;
            while(n%2==0)
            {
                cout<<"    "<<2<<"\n";
                n/=2;
            }
        for(ll i=3;i*i<=n;i+=2)
        {
            while(n%i==0)
            {
                cout<<"    "<<i<<"\n";
                n/=i;
            }
        }
        if(n>1)
        {
            cout<<"    "<<n<<"\n";
        }
        cout<<"\n";
    }
}
