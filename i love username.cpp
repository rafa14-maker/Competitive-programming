#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0,b=1002,m,n,counter=-1;
    cin>>n;
    while(n--)
    {
        cin>>m;
        if(counter==-1)
        {
            counter++;
            a=m;
            b=m;
        }
        else if(m>a)
        {
            counter++;
            a=m;
        }
        else if(m<b)
        {
            counter++;
            b=m;
        }
    }
    cout<<counter<<endl;
}
