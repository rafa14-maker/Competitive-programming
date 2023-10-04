#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n,k;

bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first < b.first)return true;
    if(a.first == b.first&&a.second>b.second)return true;
    return false;
}

void solve()
{
   // cout<<"yes"<<endl;
    cin>>n>>k;
    vector<pair<int,int> >v;
    int arr[n+5];
    int frr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>frr[i];
    for(int i=0;i<n;i++)
    {
        v.push_back(make_pair(arr[i],frr[i]));
    }
    sort(v.begin(),v.end(),cmp);

    for(int i=0;i<v.size();i++)
    {
        if(k>=v[i].first)k+=v[i].second;
        else break;
    }
    cout<<k<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

