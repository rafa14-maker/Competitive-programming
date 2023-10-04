#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int m=n+2;
    long long arr[m+5];
    for(int i=0;i<m;i++)cin>>arr[i];
    sort(arr,arr+m);
    long long sum=0;
    for(int i=0;i<m-2;i++)
    {
        sum+=arr[i];
    }

    int idx=-1,pk=-1;

    if(sum==arr[m-2])idx=m-2,pk=m-1;
    else if(sum==arr[m-1])idx=m-1,pk=m-2;
    else
    {
        for(int i=0;i<m-2;i++)
        {
            if(sum-arr[i]+arr[m-2]==arr[m-1])
            {
                idx=i;
                pk=m-1;
                break;
            }
        }
    }

    if(idx==-1)cout<<-1<<endl;
    else
    {
        for(int i=0;i<m;i++)
        {
            if(i!=idx&&i!=pk)cout<<arr[i]<<" ";
           // cout<<endl;
        }
        cout<<endl;
    }

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();

}
