#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    int idx=1e9,cnt=-1e9;


    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]<idx)
        {
            cnt=max(cnt,arr[i]-idx);
            idx=arr[i];
        }
        else
        {
            cnt=max(cnt,arr[i]-idx);
        }
    }
    //cout<<" ";
    cout<<cnt<<endl;
}

int main()
{
   int q;
   cin>>q;
   while(q--)solve();
}
