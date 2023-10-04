#include<bits/stdc++.h>
using namespace std;

map<int,int>mp;

void solve()
{
    mp.clear();
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]==0)
        {
            if(arr[i]==k)mp[arr[i]]=1;
            else if(arr[i]+arr[i]==k)
            {
                mp[arr[i]]=9;
            }
            else
            {
                int kp=abs(k-arr[i]);
                mp[arr[i]]=1;
                mp[kp]=2;
            }
        }
    }
    int idx=0;
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]==1)cout<<1<<" ";
        else if(mp[arr[i]]==9)
        {
            if(idx%2==0)cout<<1<<" ";
            else cout<<0<<" ";
            idx++;
        }
        else cout<<0<<" ";
    }
    cout<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
    //solve();
}

