#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    int frr[n+5];
    long long sum=0,counter=0;
    for(int i=0;i<n;i++)cin>>arr[i],sum+=arr[i];
    for(int i=0;i<n;i++)cin>>frr[i],counter+=frr[i];
    long long flag=0,f=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1&&frr[i]==0)flag++;
        if(arr[i]==1&&frr[i]==1)f++;
    }
    if(flag==0)cout<<-1<<endl;
    else
    {
        if(sum>counter)
            {
                cout<<1<<endl;
                return 0;
            }
        while(1)
        {
            sum=0,counter=0;
            int idx=0;
            for(int i=0;i<n;i++)
            {
                counter+=frr[i];
                if(arr[i]!=0&&frr[i]==0)
                {
                    arr[i]+=1;
                    idx=max(arr[i],idx);
                }
                sum+=arr[i];
            }
            if(sum>counter)
            {
                cout<<idx<<endl;
                return 0;
            }
            //cout<<idx<<endl;
        }
    }
}
