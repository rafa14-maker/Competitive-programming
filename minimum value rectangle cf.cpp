#include<bits/stdc++.h>
using namespace std;

map<int,int>mp;

void solve()
{
    mp.clear();
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        mp[a]++;
        arr[i] = a;
    }

    sort(arr,arr+n);

    int a = -1,b = -1;

    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]>=2)
        {
            if(a==-1)a=arr[i],mp[arr[i]]-=2;
            else if(b==-1)b=arr[i],mp[arr[i]]-=2;
        }
    }
    cout<<a<<" "<<a<<" "<<b<<" "<<b<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
