#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        long long sum=0;

        vector<pair<int,int> >v;

        for(int i=0;i<n;i++)
        {
            long long a;
            cin>>a;
            sum+=a;
            v.push_back(make_pair(a,i+1));
        }

        if(n==2)
        {
            cout<<-1<<endl;
            continue;
        }
        if(m<n)
        {
            cout<<-1<<endl;
            continue;
        }

        sort(v.begin(),v.end());

        long long k=m-n;

        long long p=(sum*2)+(k*v[0].first*v[1].first);

        cout<<p<<endl;

        for(int i=1;i<=n;i++)
        {
            int v=i+1;
            if(v==n+1)v=1;
            cout<<i<<" "<<v<<endl;
        }

        for(int i=1;i<=k;i++)
        {
            cout<<v[0].second<<" "<<v[1].second<<endl;
        }

    }
}
