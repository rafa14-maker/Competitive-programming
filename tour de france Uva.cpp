#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        cin>>m;
        float arr[n+5],frr[m+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<m;i++)cin>>frr[i];
        vector<float>v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                float f=frr[j]/arr[i];
                v.push_back(f);
            }
        }
        sort(v.begin(),v.end());
        float k=0;
        for(int i=0;i<v.size()-1;i++)
        {
            k=max(k,v[i+1]/v[i]);
        }
        printf("%.2f\n",k);
    }
}

int main()
{
    solve();
}
