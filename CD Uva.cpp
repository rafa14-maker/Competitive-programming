#include<bits/stdc++.h>
using namespace std;

void solve(int k)
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int>frr;
    int mx=0;
    for(int i=0;i<=pow(2,n);i++)
    {
        int sum=0;
        vector<int>v;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))sum+=arr[j],v.push_back(arr[j]);
        }
        if(mx<sum&&sum<=k)
        {
          mx=sum;
          frr=v;
        }
        else if(sum==mx&&frr.size()<v.size())frr=v;

    }
    for(int i=0;i<frr.size();i++)cout<<frr[i]<<" ";
    printf("sum:%d\n",mx);
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        solve(n);
    }
}
