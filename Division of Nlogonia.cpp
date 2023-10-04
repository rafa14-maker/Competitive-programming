#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int m;
        cin>>m;
        if(m==0)break;
        int a,b;
        cin>>a>>b;
        while(m--)
        {
            int l,r;
            cin>>l>>r;
            if(l==a||r==b)
            {
                cout<<"divisa"<<endl;
            }
            else
            {
               if(l>a&&r>b)cout<<"NE"<<endl;
                 if(l>a&&r<b)cout<<"SE"<<endl;
                   if(l<a&&r<b)cout<<"SO"<<endl;
                     if(l<a&&r>b)cout<<"NO"<<endl;
            }
            //cout<<"\n";
        }
    }
}
