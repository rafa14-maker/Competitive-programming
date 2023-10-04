#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    a-=b;
    if(a>c)
    {
       a=c+1;
    }
    cout<<a<<endl;
}
