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
        if((n/k)%k!=0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
