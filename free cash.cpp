#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=-1,l=-1,counter=1,m=1;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(k==a&&b==l)
        {
            counter++;
            m=max(counter,m);
        }
        else
        {
            k=a;
            l=b;
            counter=1;
        }
    }
    cout<<m<<endl;
}

