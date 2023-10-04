#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a=0,i,c,counter=0,n,d,l;

    cin>>n>>d;

    for(i=0;i<n;i++)
    {
        cin>>c;

        a+=c;

        if(d-a>=10)
        {
            counter+=2;
            a+=10;
        }
        else if(d-a>=5)
        {
           counter+=1;
           a+=5;
        }

    }
    if(a!=d)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<counter<<endl;
    }
}
