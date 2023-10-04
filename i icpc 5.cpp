#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b;
    cin>>a>>b;
    if(a.size()!=b.size())
    {
        cout<<"No"<<endl;
        return 0;
    }

    for(int i=0;i<a.size();i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]-=32;
        }
    }

    for(int i=0;i<b.size();i++)
    {
        if(b[i]>='a'&&b[i]<='z')
        {
            b[i]-=32;
        }
    }


    if(a==b)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}
