#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    double sum=arr[0];
    for(int i=1;i<n;i++)
    {
        sum=(sum+arr[i])/2;
    }
    cout<<sum<<endl;
}
