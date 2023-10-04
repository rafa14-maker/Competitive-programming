#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,d;
    cin>>n>>m>>d;
    int arr[n+5],krr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        krr[i]=arr[i];
    }

    sort(arr,arr+n);

    int frr[n+5]={0};

    int counter=0;

    for(int i=0;i<n;i++)
    {
        if(frr[arr[i]]==0)
        {
            counter++;
            frr[arr[i]]=counter;
            int p=(arr[i]+d+1)%m;
            cout<<p<<endl;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]>=p&&frr[arr[j]]==0)
                {
                    frr[arr[j]]=counter;
                    p=(arr[j]+d+1)%m;
                }
            }
        }
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" "<<frr[krr[i]]<<" "<<endl;
}
