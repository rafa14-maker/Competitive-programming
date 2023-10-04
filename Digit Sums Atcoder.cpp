#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long a=n;
    long long sum=0;
    while(a>0)
    {
        sum+=(a%10);
        a/=10;
    }
    if(n%sum==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
