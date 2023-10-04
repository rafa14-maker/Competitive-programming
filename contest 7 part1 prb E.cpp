#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,m,counter=0;

    cin>>n>>m;

    for(i=1;i<=n;i++)
    {
        counter++;
        if(i%m==0)
        {
            n++;
        }
    }

    cout<<counter<<endl;
}
