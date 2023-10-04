#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,sum=0;
    cin>>n>>k;

    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i],sum+=arr[i];



    for(int i=0;i<n;i++)
    {
       int l=max(1LL, k - (sum - arr[i]));
        int r =min(0LL + arr[i], k - (n - 1));
        int k = arr[i] - (r - l + 1);
        printf("%d ", k);
    }
}
