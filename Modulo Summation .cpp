#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    long long k=0;
    for(int i=0;i<n;i++)k+=(arr[i]-1);
    cout<<k<<endl;
}
