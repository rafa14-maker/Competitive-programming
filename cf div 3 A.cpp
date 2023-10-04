#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int l=0,r=n-1;
    int cnt=0;
    while(l<=r)
    {
        if(l==r)
        {
            cout<<arr[l]<<" ";
            break;
        }
        if(cnt%2==0)
        {
            cout<<arr[l]<<" ";
            l++;
        }
        else
        {
            cout<<arr[r]<<" ";
            r--;
        }
        cnt++;
    }
    cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
