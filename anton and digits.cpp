#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int sum=0;
    while(a>0&&c>0&&d>0)
    {
        a--;
        c--;
        d--;
        sum+=256;
    }
    while(a>0&&b>0)
    {
        a--;
        b--;
        sum+=32;
    }
    cout<<sum<<endl;
}
