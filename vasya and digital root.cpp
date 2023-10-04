#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d,k;
    cin>>d>>k;

    if(d==0)
    {
        if(k==1)cout<<0<<endl;
        else cout<<"no solution"<<endl;
    }
    else
    {
        cout<<d;
        for(int i=0;i<d-1;i++)cout<<0;
    }
}
