#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum+=i;
        if(sum-k==n-i)
        {
            cout<<n-i<<endl;
            return 0;
        }
    }
}
