#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);

    if(arr[n-3]+arr[n-2]>arr[n-1])
    {
        cout<<"YES"<<endl;
        cout<<arr[n-2]<<" "<<arr[n-1]<<" ";
        for(int i=n-3; i>=0; i--)
            cout<<arr[i]<<" ";
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
