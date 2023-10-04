#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int counter=1;
    while(a>0&&c>0)
    {
        if(counter%2==1)
        {
            c-=b;
        }
        else
        {
            a-=d;
        }
        counter++;
        if(a<=0)
        {
            cout<<"No"<<endl;
            return 0;
        }
        else if(c<=0)
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
}
