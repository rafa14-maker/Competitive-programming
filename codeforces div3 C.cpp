#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    int idx=n;
    for(int i=1;i<=n;i++)
    {
        arr[i]=idx--;
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==i)swap(arr[i],arr[i+1]);
    }
    for(int i=1;i<=n;i++)cout<<arr[i]<<" ";cout<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}
