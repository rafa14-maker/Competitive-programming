#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n*2+5];
    for(int i=0;i<n*2;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+(2*n));

    int sum1=0,sum2=0;

    for(int i=0;i<n*2;i++)
    {
        if(i<n)
        {
            sum1+=arr[i];
        }
        else
        {
            sum2+=arr[i];
        }
    }
    if(sum1!=sum2)
    {
        for(int i=0;i<n*2;i++)cout<<arr[i]<<" ";
        return 0;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=n+1;j<2*n;j++)
        {
            if(sum1-arr[i]!=sum2-arr[j])
            {
                swap(arr[i],arr[j]);
                 for(int i=0;i<n*2;i++)cout<<arr[i]<<" ";
        return 0;
            }
        }
    }
    cout<<-1<<endl;
}
