#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1;i<n;i++)
    {
        if(__gcd(n,i)==1)v.push_back(i);
    }
    int k=v.size();
    long long ans = 1,idx=0;
    for(int i=0;i<k;i++)
    {
        ans*=v[i];
        ans%=n;
        if(ans==1)idx=i;
    }
    cout<<idx+1<<endl;
    for(int i=0;i<idx+1;i++)cout<<v[i]<<" ";
    cout<<endl;
}

int main()
{
    solve();
}
