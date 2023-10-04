#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;

    if(b>0)
    {
        int counter=0;
        while(counter<b)
        {
            a++;
            counter++;
            if(a>n)a=1;
        }
    }
    else if(b<0)
    {
        int counter=0;
        b*=(-1);
        while(counter<b)
        {
            a--;
            counter++;
            if(a<1)a=n;
        }
    }
    cout<<a<<endl;
}
