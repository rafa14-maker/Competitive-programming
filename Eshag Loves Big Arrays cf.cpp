#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    int mn = 1e8+7;
    for(int i=0;i<n;i++)cin>>arr[i],mn=min(mn,arr[i]);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=mn)cnt++;
    }
    cout<<cnt<<endl;
}

int main()
{
   int q;
   cin>>q;
   while(q--)solve();
}
