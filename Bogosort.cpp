#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
       reverse(arr,arr+n);
       for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        cout<<"\n";
    }
}
