#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        int frr[n+5];
        for(int i=0;i<n;i++)cin>>frr[i];
        sort(arr,arr+n);
        sort(frr,frr+n);
        map<int,int>mp;
        vector<pair<int,int> >v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(frr[j]!=-9&&mp[arr[i]+frr[j]]==0)
                {
                    v.push_back(make_pair(arr[i],frr[i]));
                    mp[arr[i]+frr[j]]=1;
                    frr[j]=-9;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++)cout<<v[i].first<<" ";
        cout<<"\n";
         for(int i=0;i<n;i++)cout<<v[i].second<<" ";
        cout<<"\n";
    }
}
