#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==0&&b==0&&c==0&&d==0)break;
        int k=a*60+b;
        int p=c*60+d;
        if(k<=p)cout<<p-k<<endl;
        else cout<<1440-k+p<<endl;
    }
}
