#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int idx=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]!=arr[j])
            {
                for(int k=j+1;k<n;k++)
                {
                    if(arr[k]!=arr[i]&&arr[k]!=arr[j]&&arr[k]<arr[i]+arr[j])
                    {
                       idx++;
                    }
                }
            }
        }
    }
    cout<<idx<<endl;
}
