#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m+5]={0};
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        for(int j=a;j<=b;j++)arr[j]=1;
    }
    vector<int>v;
    for(int i=1;i<=m;i++)
    {
        if(arr[i]==0)v.push_back(i);
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}
