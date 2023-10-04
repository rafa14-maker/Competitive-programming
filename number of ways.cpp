#include<bits/stdc++.h>
using namespace std;

long long arr[500005],n,sum,k;

int main()
{
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]*3==arr[n-1]*2)sum+=k;
        if(arr[i]*3==arr[n-1])k++;
      //  cout<<arr[i]<<" "<<k<<" "<<sum<<endl;
    }

    cout<<sum;
}
