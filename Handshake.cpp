#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    int arr[n+5];
    int frr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++)frr[i]=arr[i];
    for(int i=1;i<n;i++)frr[i]+=frr[i-1];

    long long sum=0;
    for(long long i=n-1;i>=0;i--)
    {
        sum+=(arr[i]+arr[i]);
       // cout<<sum<<endl;
        break;
        m--;
        if(m<=0)break;
        long long p =min(m/2,i-1);
        if(i-1-p>=0)sum+=2*(frr[i-1]-frr[i-1-p])+(arr[i]*p);
        else sum+=(2*frr[i-1])+(arr[i]*p);
        m-=p*2;
        if(m<=p)break;
    }
    cout<<sum<<endl;
}
