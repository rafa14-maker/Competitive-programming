#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{
    long long arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    long long sum=-1e18;


    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int p=j+1;p<n;p++){
            long long k=arr[i]+arr[j]+arr[p];
            int l=0,r=n-1;
            while(l<=r)
            {
                int mid=(l+r)/2;
                if(arr[mid]==k&&mid!=i&&mid!=j&&mid!=p)
                {
                    sum=max(sum,k);
                    break;
                }
                else if(arr[mid]>k)
                {
                    r=mid-1;
                }
                else l=mid+1;
            }
        }
    } }
   // cout<<"bbb  ";
    if(sum==-1e18)cout<<"no solution"<<endl;
    else cout<<sum<<endl;
}

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)break;
        solve(n);
    }
}
