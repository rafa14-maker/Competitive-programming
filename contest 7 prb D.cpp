#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,n,j=1,a;

    cin>>a>>n;

    if(n==10&&a==1)
    {
        cout<<-1<<endl;
        return 0;
    }

    else if(n==10)
    {
        cout<<1;
        for(i=0;i<a-1;i++)
        {
            cout<<0;
        }
        cout<<"\n";
        return 0;
    }

    for(i=1;i<=a;i++)
    {
        cout<<n;
    }
    cout<<"\n";

}
