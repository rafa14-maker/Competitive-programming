#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,t,counter=0,i;
    char k;
   cin>>t>>a>>b>>c>>d;
    for(i=1;i<=t;i++)
    {
        cin>>k;
        if(a!=c||b!=d)
        {
            counter++;
        }
        if(k=='E')
        {
            if(a<c)
            {
                a++;
            }
        }
        if(k=='W')
        {
            if(a>c)
            {
                a--;
            }
        }
        if(k=='N')
        {
            if(b<d)
            {
                b++;
            }
        }
        if(k=='S')
        {
            if(b>d)
            {
                b--;
            }
        }
    }
    if(a==c&&b==d)
    {
        cout<<counter<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
