#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int>v;
    for(int i=n-1;i>=0;i-=2)
    {
        v.push_back(arr[i]);
        arr[i]=-2;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=-2) v.push_back(arr[i]);
    }
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}
