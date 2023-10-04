#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=1;i<=n;i++)cin>>arr[i];
    vector<int>adj[n+5];
    while(k--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int counter=0;
    for(int i=1;i<=n;i++)
    {
        int flag=0;
        for(int j=0;j<adj[i].size();j++)
        {
           // cout<<i<<" "<<adj[i][j]<<endl;
            if(arr[i]>arr[adj[i][j]])
            {
            flag++;
            }
        }
        if(flag==adj[i].size())counter++;
    }
    cout<<counter<<endl;
}
