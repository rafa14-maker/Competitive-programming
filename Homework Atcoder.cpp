#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long k,n;
    cin>>k>>n;
    long long sum=0;
    while(n--)
    {
        long long a;
        cin>>a;
        sum+=a;
    }
    if(k-sum<0)cout<<-1<<endl;
    else cout<<k-sum<<endl;
}
