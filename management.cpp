#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    map<int,int>mp;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    for(int i=1;i<=n;i++)cout<<mp[i]<<endl;

}
