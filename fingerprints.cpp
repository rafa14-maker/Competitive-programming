#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+5],frr[m+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<m;i++)cin>>frr[i];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i]==frr[j])
            {
                v.push_back(arr[i]);
                break;
            }
        }
    }

    vector<int>k;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i]==frr[j])
            {
                k.push_back(v[i]);
                frr[j]=-1;
            }
        }
    }

    for(int i=0;i<k.size();i++)
    {
        cout<<k[i]<<" ";
    }

}
