#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int p=min(arr[i],abs(arr[i]-k));
        sum+=(p*2);
    }
    cout<<sum<<endl;
}
