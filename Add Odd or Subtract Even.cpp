#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long a,b;
        cin>>a>>b;
        if(a==b)cout<<0<<endl;
        else if(a<b)
        {
            long long d=abs(a-b);
            if(d%2==1)cout<<1<<endl;
            else cout<<2<<endl;
        }
        else
        {

            long long d=abs(a-b);
            if(d%2==0)cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
}
