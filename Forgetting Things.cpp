#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==9&&b==1)
    {
        cout<<9<<" "<<10<<endl;
        return 0;
    }
    if(b<a)
    {
        cout<<-1<<endl;
        return 0;
    }
    else if(b-a>1)
    {
        cout<<-1<<endl;
        return 0;
    }
    else
    {
        if(a==b)
        {
            cout<<a<<"1"<<" "<<b<<"2"<<endl;
        }
        else if(b>a)
        {
            cout<<a<<"9"<<" "<<b<<"0"<<endl;
        }
    }
}
