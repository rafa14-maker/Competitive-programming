#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    long long s;
    cin>>n>>k>>s;
    int arr[k+5];
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)arr[i]=n;
        else arr[i]=1;
    }
    long long sum=(n-1)*(k-1);
    if(sum==s)
    {

    }
    else
    {
        long long r=s-sum;

    }
}
