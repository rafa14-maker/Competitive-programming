#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int n,d,r;
        cin>>n>>d>>r;
        if(n==0&&d==0&&r==0)break;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        int frr[n+5];
        for(int i=0;i<n;i++)cin>>frr[i];
        sort(frr,frr+n,greater<int>());
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            int k=arr[i]+frr[i];
            if(k>d)sum+=(k-d)*r;
        }
        cout<<sum<<endl;
    }
}
