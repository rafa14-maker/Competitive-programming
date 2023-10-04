#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5],frr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>frr[i];
    int cum[n+5]={0};

    int krr[n+5]={0};
    for(int i=0;i<n;i++)
    {
        if(arr[i]==frr[i])
        {krr[i]=frr[i];
        cum[krr[i]]=1;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(krr[i]==0)
        {
            for(int j=1;j<=n;j++)
            {
                if(cum[j]==0)
                {
                    krr[i]=j;
                    cum[j]=1;
                    break;
                }
            }
        }
    }
    for(int i=0;i<n;i++)cout<<krr[i]<<" ";
}
