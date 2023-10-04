#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    for(int c=1;c<=q;c++)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        int sum=0,flag=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum<0)sum=0;
            flag=max(sum,flag);
        }
        sum=0;
         for(int i=n-1;i>=0;i--)
        {
            sum+=arr[i];
            if(sum<0)sum=0;
            flag=max(sum,flag);
        }
        printf("Case %d: %d\n",c,flag);
    }
}
