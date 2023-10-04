#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n;
        cin>>n;
        if(n==2)cout<<2<<endl;
        else
        {
            int k=n/2;
            if(k*2==n)cout<<0<<endl;
            else cout<<1<<endl;
        }
    }
}
