#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c,d,counter=0,n,i;

    cin>>n>>t;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;

        if(a==b)
        {
            counter+=2;
        }

       else if(a>b)
        {
            c=a;
            d=b;
        }
        else
        {
            d=a;
            c=b;
        }
        while(d<=c)
        {
            d+=t;
            counter++;
            if(d+t>c)
            {
                break;
            }
        }

    }
    cout<<counter<<endl;
}
