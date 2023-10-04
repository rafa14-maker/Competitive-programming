#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long a,b;
        cin>>a>>b;
        if(a%b==0)cout<<0<<endl;
        else if(a%b!=0)
        {
            cout<<b-(a%b)<<endl;
        }
        else
        {
            cout<<abs(a-b)<<endl;
        }
    }
}
