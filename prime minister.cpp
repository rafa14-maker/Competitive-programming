#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    int arr[n+5];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(arr[0]>sum/2)
    {
        cout<<1<<endl<<1<<endl;
        return 0;
    }
    int counter=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]*2<=arr[0])v.push_back(i+1),    counter+=arr[i];


    }
    counter+=arr[0];
   // cout<<counter<<endl;
    if(v.size()==0||counter<=sum/2)
    {
        cout<<0<<endl;
        return 0;
    }
    else
    {
        v.push_back(1);
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
    }
}
