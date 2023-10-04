#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    int kp=1e9;
    int pk=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        kp=min(kp,arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>kp)pk++;
    }
    cout<<pk<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
