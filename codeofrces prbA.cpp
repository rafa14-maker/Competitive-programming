#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,r,i,l=0;

    cin>>b>>r;

    r=240-r;

    for(i=1;i<=b;i++)
    {
        l+=i*5;
        if(l>r)
        {
            cout<<i-1<<endl;
            return 0;
        }
    }
    cout<<b<<endl;

}
