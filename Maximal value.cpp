#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=1;i<n;i++)cin>>arr[i];
    int frr[n+5]={0};

    for(int i=0;i<n;i++)
    {
        if(i==0)frr[i]=arr[i+1];
        else
        {
            if(max(frr[i-1],arr[i])==arr[i])
            {
                frr[i]=arr[i];
            }
            else
            {
                frr[i-1]=arr[i];
                frr[i]=arr[i];
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)sum+=frr[i];
    cout<<sum<<endl;
}
