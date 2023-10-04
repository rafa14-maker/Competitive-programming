#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    if(n==1)
    {
        cout<<arr[0]<<endl;
        return ;
    }

    long long cnt=0;
    for(int i=0;i<n;i++)
    {
        if(i+1<n&&i-1>=0)
        {
            if(arr[i]>arr[i+1]&&arr[i]>arr[i-1])
            {
                cnt+=abs(arr[i]-max(arr[i-1],arr[i+1]));
                arr[i]=max(arr[i+1],arr[i-1]);
            }
        }
       else  if(i==0&&i+1<n&&arr[i]>arr[i+1])
        {
            cnt+=abs(arr[i]-arr[i+1]);
            arr[i]=arr[i+1];
        }
       else if(i==n-1&&i-1>=0&&arr[i-1]<arr[i])
       {
           cnt+=abs(arr[i]-arr[i-1]);
           arr[i]=arr[i-1];
       }
    }

    long long sum=0;

    sum+=arr[0];
    sum+=arr[n-1];

    for(int i=1;i<n;i++)
    {
        sum+=abs(arr[i]-arr[i-1]);
    }

    cout<<sum+cnt<<endl;

}

int main()
{
    int q;cin>>q;while(q--)solve();
 // solve();
}

