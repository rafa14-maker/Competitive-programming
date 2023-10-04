#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d;
    cin>>d;
    if(abs(a-c)<=d)cout<<"Yes"<<"\n";
    if(abs(a-b)<=d&&abs(b-c)<=d)cout<<"Yes"<<"\n";
}
