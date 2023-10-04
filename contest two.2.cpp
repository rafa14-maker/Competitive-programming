#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f;

    cin>>a>>b>>c>>d>>e;

    f=a+b+c+d+e;

    if(f%5==0)
    {
        cout<<f/5<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }

    return 0;
}
