#include<bits/stdc++.h>
using namespace std;


void solve()
{
    //cout<<"404"<<endl;

    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    long long a,b,a1,b1,sum= 1e9+7;

    for(int i=0;i<n;i++)
    {
        if(i+1<n&&abs(arr[i]-arr[i+1])<sum)
        {
            sum=abs(arr[i]-arr[i+1]);
            a=arr[i];
            b=arr[i+1];
            a1=i;
            b1=i+1;
           // break;
        }
    }

    if(n<=2)
    {
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        cout<<endl;
    }
    else
    {
       for(int i=b1;i<n;i++)cout<<arr[i]<<" ";
       for(int i=0;i<=a1;i++)cout<<arr[i]<<" ";
       cout<<endl;
    }

}

int main()
{
    int q;cin>>q;while(q--)solve();
 // solve();
}

