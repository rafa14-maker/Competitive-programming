#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    long long c =1;
    for(int i=0;i<abs(a-b);i++)
    {
        c*=32;
    }
    cout<<c<<endl;
}
