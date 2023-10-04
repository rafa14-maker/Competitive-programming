#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,a,n,b;

     cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
        b=360%(180-a);
        if(b==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
