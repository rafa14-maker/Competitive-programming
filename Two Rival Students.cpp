#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        if(a>b)swap(a,b);
        int flag=a-b;
        a=(a-x);
        int counter=0;
        if(a<=0)
        {
            counter=(a*(-1))+1;
            a=1;
        }
        b=(b+counter);
        if(b>n)b=n;
        cout<<max(flag,abs(a-b))<<endl;
    }
}
