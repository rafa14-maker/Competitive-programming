#include<bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int>v;
    int n;
    cin>>n;
    int m = n*4;
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=3*n;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
   solve();
}
