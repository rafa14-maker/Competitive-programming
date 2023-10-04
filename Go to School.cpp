#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> >v;

    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        v.push_back(make_pair(a,i));
    }
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].second<<" ";
    }
}
