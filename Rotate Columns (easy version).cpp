#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int k=n*m;
        int arr[k+5];
        for(int i=0;i<k;i++)cin>>arr[i];
        sort(arr,arr+k);

       // for(int i=0;i<k;i++)cout<<arr[i]<<" ";cout<<endl;

        int sum=0;
        for(int i=k-1;i>=k-n;i--)
        {
            sum+=arr[i];
        }
        cout<<sum<<endl;
    }
}
