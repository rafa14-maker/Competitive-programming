#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)arr[i]-=1;
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
