#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    if(n*2>=m)
    {
        long long sum=m/2;
         sum=min(sum,n);
        cout<<sum<<endl;
    }
    else if(n*2<m)
    {
        long long sum=n;
        m-=(n*2);
        sum+=(m/4);
        cout<<sum<<endl;
    }
}
