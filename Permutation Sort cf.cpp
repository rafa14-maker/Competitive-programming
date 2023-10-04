#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    bool tr=true;

    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])tr=false;
    }

    if(tr)
    {
        cout<<0<<endl;
        return ;
    }

    if(arr[0]==1||arr[n-1]==n)cout<<1<<endl;
    else if(arr[0]==n&&arr[n-1]==1)cout<<3<<endl;
    else cout<<2<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
