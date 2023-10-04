#include<bits/stdc++.h>
using namespace std;

int main()
{
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);

    int q;
    cin>>q;
    while(q--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a+c>b+d)
        {
            cout<<"AUSTRALIA"<<endl;
        }
        else if(b+d>a+c)
        {
            cout<<"ENGLAND"<<endl;
        }
        else if(a+c==b+d)
        {
            cout<<"TIE"<<endl;
        }
    }
}
