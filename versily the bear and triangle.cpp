#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a<0||b<0)
    {
        cout<<a-b<<" "<<0<<" "<<0<<" "<<b-a<<endl;
    }
    else
    {
        cout<<0<<" "<<a+b<<" "<<a+b<<" "<<0<<endl;
    }
}
