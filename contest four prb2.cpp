#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;

    int i,cou=0,fou=0;

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            cou++;
        }
        else if(a[i]>='A'&&a[i]<='Z')
        {
            fou++;
        }
    }

    if(cou>fou)
    {
        for(i=0;a[i]!='\0';i++)
    {

         if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }
    }
    else if(cou==fou)
    {
        for(i=0;a[i]!='\0';i++)
    {
            if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }
    }
    else if(cou<fou)
    {
        for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-32;
        }
    }
    }

    cout<<a<<"\n";

    return 0;
}
