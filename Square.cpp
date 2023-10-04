#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==c||a==d||b==c||b==d)
        {
             if(b+d==a||b+c==a||a+c==b||a+d==b)cout<<"Yes"<<endl;
             else cout<<"No"<<endl;
        }
        else cout<<"No"<<endl;
    }
}
