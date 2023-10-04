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
        if(a>c)swap(a,c);
        if(b>d)swap(b,d);
       cout<<min((c-a)+1,(d-b)+1)<<endl;
    }
}
