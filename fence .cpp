#include<bits/stdc++.h>
using namespace std;

int main()
{

int arr[150009],n,h,k,m=15000009,ans,i,b;

    arr[0]=0;

    cin>>n>>k;

    for(i=1;i<=n;i++)
    {
        cin>>b;
        arr[i]=arr[i-1]+b;

        if(i>=k&&arr[i]-arr[i-k]<m)
        {
            m=arr[i]-arr[i-k];
            ans=i-k+1;
        }

    }
    cout<<ans<<endl;
}
