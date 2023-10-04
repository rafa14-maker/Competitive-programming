#include<bits/stdc++.h>
using namespace std;

int dp[50005];

int main()
{
    int q;
    cin>>q;
    while(q--){
            int n;
     scanf("%d",&n);
    int arr[n+5];
     for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    // memset(dp,-1,sizeof dp);
    // printf("%d\n",f(0,0,0));

    sort(arr,arr+n);

    int sum=arr[0],fun=arr[n-1];

    int l=1,r=n-2;

    int counter=999999;

    while(l<=r)
    {
        if(sum<fun)
        {
            sum+=arr[l];
            arr[l]=0;
            l++;
        }
        else if(sum>=fun)
        {
            fun+=arr[r];
            arr[r]=0;
            r--;
        }
    }
    cout<<abs(sum-fun)<<endl;
    }
}

