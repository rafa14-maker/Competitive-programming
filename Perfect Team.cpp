#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int k=min(a,b);
        k=min(k,c);
        a-=k;
        b-=k;
        c-=k;
        int counter=k;
        if(a>0&&b>0)
        {
           int p=(a+b)/3;
           p=min(p,a);
           p=min(p,b);
           counter+=p;
        }
        cout<<counter<<endl;
    }
}
