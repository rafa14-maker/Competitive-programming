#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    arr[0]=arr[n+1]=1e9;

    int idx=-1,mx=0;

    for(int i=1;i<=n;i++)
    {
       if(arr[i]>mx&&(arr[i]>arr[i-1]||arr[i]>arr[i+1]))
       {
           mx=arr[i];
           idx=i;
       }
    }
    cout<<idx<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
