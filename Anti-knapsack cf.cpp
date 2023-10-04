#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=k+1;i<=n;i++)v.push_back(i);
    int len= k/2;
    if(k%2==1)len++;
    for(int i=k-1;i>=len;i--)v.push_back(i);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";if(v.size()>0)cout<<endl;
}

int main()
{
    int n;cin>>n;
    while(n--)solve();
}
