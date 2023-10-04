#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int l;
        cin>>l;
        if(l==0)break;
        scanf("%d",&n);
       // if(n==0)break;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        int m=l/2;
        int p=-1,k=1e8;
        for(int i=0;i<n;i++)
        {
            if(abs(m-arr[i])<k)
            {
                k=abs(arr[i]-m);
                p=i;
            }
        }
        int cost = 0;

        for(int i=0;i<p;i++)
        {
            arr[i]=arr[i+1];
        }
        for(int i=n-1;i>p;i--)
        {
            arr[i]=arr[i-1];
        }
        for(int i=0;i<n;i++)cost+=arr[i];
        cout<<cost<<endl;
    }
}
