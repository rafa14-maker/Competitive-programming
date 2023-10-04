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
        sort(arr,arr+n);
        vector<int>v;
        int l=0,r=n-1;
        while(l<=r)
        {
            if(l==r)
            {
                 v.push_back(arr[l]);
                 break;
            }
            v.push_back(arr[l]);
            v.push_back(arr[r]);
            l++;
            r--;
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<"\n";
    }
}
