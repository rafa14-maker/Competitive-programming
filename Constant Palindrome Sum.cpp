#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    map<int,int>cnt;
    vector<int>vec1,vec2;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        cnt[arr[i]+arr[j]]++;
        vec1.push_back(k+max(arr[i],arr[j]));
        vec2.push_back(1+min(arr[i],arr[j]));
    }
    sort(vec1.begin(),vec1.end());
    sort(vec2.begin(),vec2.end());
    int res=n/2;
    for(auto &qq:cnt)
    {
        int cur = n/2 - qq.second;
        cur+=lower_bound(vec1.begin(),vec1.end(),qq.first)-vec1.begin();
        cur+=vec2.end()-upper_bound(vec2.begin(),vec2.end(),qq.first);
        res=min(res,cur);
    }
    cout<<res<<"\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
