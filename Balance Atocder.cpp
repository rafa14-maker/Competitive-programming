#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    long long sum=0;
    for(int i=0;i<n;i++)sum+=arr[i];
    long long counter=1e9,flag=0;

    for(int i=0;i<n-1;i++)
    {
         flag += arr[i];
      //  long long p = sum-k;
        counter=min(counter,abs(flag-(sum-flag)));
    }
    cout<<counter<<endl;
}
