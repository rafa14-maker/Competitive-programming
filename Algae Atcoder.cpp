#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long r,d,a;
    cin>>r>>d>>a;
    for(int i=0;i<10;i++)
    {
        cout<<r*a-d<<endl;
        a=r*a-d;
    }
}
