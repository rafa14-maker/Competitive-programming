#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==1)
    {
        cout<<0<<endl;
    }
    else
    {
        n/=2;
        long long a=1;
        for(int i=1;i<=n;i++)a*=2;
       cout<<a<<endl;
    }
}
