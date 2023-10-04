#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int a=0,b=0,c=0,k=1,counter=0;

    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]!='/')
        {
           if(counter==0)
                {
                   a+=((s[i]-48)*k);
                    k*=10;
                }
                else if(counter==1)
                {
                    b+=((s[i]-48)*k);
                    k*=10;
                }
                else if(counter==2)
                {
                    c+=((s[i]-48)*k);
                    k*=10;
                }
        }
        else
        {
            k=1;
            counter++;
        }
    }
   // cout<<a<<" "<<b<<" "<<c;
    if(c<2019)
    {
        cout<<"Heisei"<<endl;
    }
    else if(c==2019&&b<4)
    {
        cout<<"Heisei"<<endl;
    }
    else if(c==2019&&b==4&&a<30)
    {
        cout<<"Heisei"<<endl;
    }
    else if(c==2019&&b==4&&a==30)
    {
         cout<<"Heisei"<<endl;
    }
    else
    {
        cout<<"TBD"<<endl;
    }
}
