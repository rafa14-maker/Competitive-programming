#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    int kp=k;
    int arr[n+5]={0};
   int idx=n;
    for(int i=2;i<=n-1;i+=2)
    {
        if(k<=0)break;
        arr[i]=idx;
        idx--;
        k--;
    }
    idx=1;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==0)
        {
            arr[i]=idx;
            idx++;
        }
    }

    int cnt=0;
    for(int i=2;i<n;i++)
    {
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])cnt++;
    }
    if(cnt!=kp)cout<<-1<<endl;
    else
    {
        for(int i=1;i<=n;i++)cout<<arr[i]<<" ";cout<<endl;
    }
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
