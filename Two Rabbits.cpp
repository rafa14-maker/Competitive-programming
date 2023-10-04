#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long n=(b-a);
        long long k=(c+d);
        if(n%k==0)cout<<n/k<<endl;
        else cout<<-1<<endl;
    }
}
