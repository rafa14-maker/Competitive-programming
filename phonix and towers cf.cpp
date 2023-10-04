#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n+5];
    int frr[m+5];
    map<int,int>mp;
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
       // frr[cnt]+=arr[i];
       // cnt++;
       // if(cnt==m)cnt=0;
    }

    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
      //  cin>>arr[i];
        frr[cnt]+=arr[i];
        mp[i] = cnt;

        cnt++;
        if(cnt==m)cnt=0;
    }

    bool tr = true;

    for(int i=1;i<m;i++)
    {
        if(abs(frr[i]-frr[i-1])>k)tr=false;
    }

    if(tr)cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)cout<<mp[i]+1<<" ";cout<<endl;
    }

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
