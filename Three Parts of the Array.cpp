#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long  arr[n+5];
    long long  frr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        frr[i]=arr[i];
    }
    for(int i=1;i<n;i++)
    {
        arr[i]+=arr[i-1];
    }
    for(int i=n-1;i>0;i--)
    {
        frr[i-1]+=frr[i];
    }

    long long  ans=0;

   // for(int i=0;i<n;i++)cout<<arr[i]<<" "<<frr[i]<<endl;

    int l=0,r=n-1;
    while(l<n&&r>=0&&l<r)
    {
      //  cout<<l<<" "<<r<<endl;
        if(arr[l]==frr[r])ans=max(ans,arr[l]);

        if(arr[l]<frr[r])l++;

        else if(frr[r]<arr[l])r--;

        else l++;
    }
    cout<<ans<<endl;
}
