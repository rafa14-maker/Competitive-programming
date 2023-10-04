#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,m,k;
      cin>>n>>m>>k;
        k=min(k,m-1);
        long long arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<long long>v;
        for(int i=0;i<m;i++)
        {
            v.push_back(max(arr[i],arr[n-m+i]));
        }
        long long ans=0;
        for(int i=0;i<k+1;i++)
        {
            long long g=1e18;
            for(int j=0;j<m-k;j++)g=min(g,v[i+j]);
            ans=max(ans,g);
        }
        cout<<ans<<endl;
    }
}
