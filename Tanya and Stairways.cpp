#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int>v;

    for(int i=0;i<n;i++)
    {
        if(i==n-1)v.push_back(arr[i]);
        else if (arr[i]>=arr[i+1])v.push_back(arr[i]);
    }

    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}
