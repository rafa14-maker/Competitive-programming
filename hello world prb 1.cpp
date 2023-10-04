#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;

    cin>>a>>b>>c>>d;

    if(a+b>c||a+b>d||a+c>b||a+c>d||a+d>c||a+d>b||c+b>d||c+b>a||d+b>c||d+b>a||c+d>a||c+d>b)
    {
        cout<<"TRIANGLE"<<endl;
    }
    else  if(a+b==c||a+b==d||a+c==b||a+c==d||a+d==c||a+d==b||c+b==d||c+b==a||d+b==c||d+b==a||c+d==a||c+d==b)
    {
        cout<<"SEGMENT"<<endl;
    }
    else
    {
        cout<<"IMPOSSIBLE"<<endl;
    }

}
