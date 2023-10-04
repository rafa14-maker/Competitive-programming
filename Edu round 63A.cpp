#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(make_pair(a,i+1));
    }
    sort(v.begin(),v.end());
    if(v[0].first+v[1].first<=v[n-1].first)cout<<v[0].second<<" "<<v[1].second<<" "<<v[n-1].second<<endl;
    else cout<<-1<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
