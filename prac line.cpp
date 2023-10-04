#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            int k;
            k=min(j-i,abs(i-a)+abs(j-b)+1);
            mp[k]++;
        }
    }
    for(int i=1;i<n;i++)cout<<mp[i]<<endl;
}

