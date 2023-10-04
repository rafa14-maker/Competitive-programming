#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,i,counter=0,b;
    cin>>n>>m;

    if(m==0)
    {
        cout<<0<<endl;
        return 0;
    }

    for(i=1;i<=n;i++)
    {
        b=m/i;
        if(b<=n&&m%b==0)
        {
            counter++;
        }
    }

    cout<<counter<<endl;
}
