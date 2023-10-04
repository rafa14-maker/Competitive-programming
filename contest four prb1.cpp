#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,b,k;
    cin>>n>>m;
    if(n%2==0)
    {
        b=n/2;
    }
    else
    {
        b=n/2;
        b++;
    }
    if(m<=b)
    {
        k=(m*2)-1;
        cout<<k<<endl;
    }
    else{
            k=(m-b)*2;
        cout<<k<<endl;
    }
}
