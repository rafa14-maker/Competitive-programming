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
        for(int i=1;i<n;i++)
        {
            if(arr[i]<0&&arr[i-1]<0)
            {
                arr[i]=max(arr[i],arr[i-1]);
                arr[i-1]=0;
            }
            else if(arr[i]>0&&arr[i-1]>0)
            {
                 arr[i]=max(arr[i],arr[i-1]);
                arr[i-1]=0;
            }
        }
        long long sum=0;
        for(int i=0;i<n;i++)sum+=arr[i];
        cout<<sum<<endl;
    }
}
