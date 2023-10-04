#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  n,a,b;
    cin>>n;
    long long sum=0;
    for(int i=0;i<n-1;i++)
    {

        cin>>a>>b;
        sum+=(a-b);
    }
    cin>>a>>b;
    cout<<sum+a;
}
