#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>0&&b==0)cout<<"Gold"<<endl;
    if(b>0&&a==0)cout<<"Silver"<<endl;
    if(a>0&&b>0)cout<<"Alloy"<<endl;
}

