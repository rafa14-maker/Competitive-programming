#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n;
    cin>>k>>n;
    vector<int>v;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            v.push_back((k-arr[i]+arr[0]));
        }
        else
        {
              v.push_back(arr[i+1]-arr[i]);
        }
    }
    long long sum=0;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++)sum+=v[i];
    cout<<sum<<endl;
}
