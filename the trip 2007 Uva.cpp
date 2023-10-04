#include<bits/stdc++.h>
using namespace std;

int n;

void solve()
{
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int idx=-1,pk=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            pk++;
            continue;
        }
        else
        {
            idx=max(idx,pk);
            pk=1;
        }
    }
    cout<<idx<<endl;
    for(int i=0;i<idx;i++)
    {
        bool f=true;
        for(int j=i;j<n;j+=idx)
        {
            if(f)f=false;
            else cout<<" ";
            cout<<arr[j];
        }
        printf("\n");
    }
}

int main()
{
    while(scanf("%d",&n))
    {
        if(n==0)break;
        solve();
    }
}

