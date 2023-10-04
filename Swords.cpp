#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

int main()
{
    int n;
    cin>>n;
    long long arr[n+5];
    long long k=0,l=1e16;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        k=max(k,arr[i]);
        if(arr[i]!=0)l=min(l,arr[i]);
    }
    long long sum=0;
    int g;
    for(int i=0;i<n;i++)
    {
        sum+=(k-arr[i]);
        if(i==0)g=(k-arr[i]);
        else if(k-arr[i]!=0)g=gcd(g,k-arr[i]);
    }
   cout<<sum/g<<" "<<g<<endl;
}
