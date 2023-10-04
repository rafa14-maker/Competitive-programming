#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    long long arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    vector<pair<long long,long long> >v;
    for(int i=0;i<m;i++)
    {
        long long a,b;
        cin>>a>>b;
       if(a>0) v.push_back(make_pair(b,a));
    }

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    int idx=0;

    for(int i=0;i<n;i++)
    {
       if(arr[i]<v[idx].first&&v[idx].second>0)
       {
           arr[i]=v[idx].first;
           v[idx].second--;
           if(v[idx].second==0)idx++;
           if(idx==v.size())break;
       }
    }

    long long sum=0;
    for(int i=0;i<n;i++)sum+=arr[i];
    cout<<sum<<endl;
}
