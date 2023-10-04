#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    long long sum=0;
    while(k--)
    {
        long long a;
        cin>>a;
        sum+=a;
    }
    if(sum>=n)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
