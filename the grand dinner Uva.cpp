#include<bits/stdc++.h>
using namespace std;

int n,m;

void solve()
{
    vector<pair<int,int> >v;
    int frr[n+5];

    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        v.push_back(make_pair(a,i));
    }

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    for(int i=0;i<n;i++)cin>>frr[i];

    //sort(frr,frr+n);

    int krr[n+5]={0};

    vector<int>adj[m+5];

    bool tr=true;

    for(int i=0;i<m;i++)
    {
        int k=v[i].first;
        int a=v[i].second;
        for(int j=0;j<n;j++)
        {
            if(krr[j]<frr[j]&&k>0)
            {
                krr[j]++;
                k--;
                adj[a].push_back(j+1);
            }
        }
       // cout<<k<<endl;
        if(k>0)tr=false;
    }

    if(!tr)cout<<0<<endl;
    else
    {
        cout<<1<<endl;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<adj[i].size();j++)cout<<adj[i][j]<<" ";
            cout<<endl;
        }
    }

}

int main()
{
   while(1)
   {
       cin>>m>>n;
       if(n==0&&m==0)break;
       solve();
   }
}
