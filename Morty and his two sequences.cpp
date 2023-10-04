#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5],frr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>frr[i];
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==frr[i])counter++;
    }
    cout<<n-counter<<endl;
}
