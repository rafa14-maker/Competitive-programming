#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=1;i<n;i++)arr[i]+=arr[i-1];
    int counter=0;

    for(int i=0;i<n-1;i++)
    {
        if(arr[n-1]-arr[i]==arr[i])counter++;
    }
    cout<<counter<<endl;
}
