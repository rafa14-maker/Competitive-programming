#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=0,y=0,k,n,i,counter=0,b;

    cin>>k>>n;

    x=n;
    y=x;

    for(i=0;i<k-1;i++)
    {
        cin>>n;
        if(n>x)
        {
            counter++;


            x=n;
        }
        else if(y>n)
        {
            y=n;
            counter++;
        }
    }

    cout<<counter<<endl;

}
