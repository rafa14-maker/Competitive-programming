#include<bits/stdc++.h>
using namespace std;

int test;
int n;

void solve()
{
    int arr[n+5][n+5];
    bool vis[n+5][n+5];
    vector<long long>v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            vis[i][j]=false;
        }
    }

    for(int a=0,b=n-1;a<=b;a++,b--)
    {
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i==a||i==b||j==a||j==b)&&(!vis[i][j]))
                {
                    sum+=arr[i][j];
                    vis[i][j]=true;
                }
            }
        }
        v.push_back(sum);
    }
    printf("Case %d:",++test);
    for(int i=0;i<v.size();i++)cout<<" "<<v[i];
    cout<<"\n";
}

int main()
{
    while(1)
    {
        cin>>n;
        if(n==0)break;
        solve();
    }
}
