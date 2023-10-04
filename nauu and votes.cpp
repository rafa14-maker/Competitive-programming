#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(y+z<x)
    {
        cout<<"+"<<endl;
    }
    else if(x+z<y)
    {
        cout<<"-"<<endl;
    }
    else if(x==y&&z==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<"?"<<endl;
    }
}
