#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    map<int,int>mp;
    for(int i=0;i<n;i++)cin>>arr[i],mp[arr[i]]++;
    int idx=0;
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]==1)
        {
            idx=i+1;
            break;
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
