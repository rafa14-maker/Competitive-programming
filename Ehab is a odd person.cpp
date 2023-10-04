#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5],c=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]&1)c++;
    }
    if(c!=0&&c!=n)sort(arr,arr+n);


        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        return 0;

}
