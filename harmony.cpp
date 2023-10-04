#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    if(a>b)swap(a,b);
    if((b-a)%2==1)cout<<"IMPOSSIBLE";
    else
    {
        long long k=(b-a)/2;
        cout<<b-k<<endl;
    }
}
