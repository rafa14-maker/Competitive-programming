#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b)cout<<a<<endl;
    else if(a==0&&b==1||a==1&&b==0)cout<<2<<endl;
    else if(a==1&&b==2||a==2&&b==1)cout<<0<<endl;
    else cout<<1<<endl;
}
